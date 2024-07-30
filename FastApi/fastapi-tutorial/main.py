from fastapi import FastAPI, Request
from fastapi.responses import HTMLResponse
from fastapi.staticfiles import StaticFiles
from fastapi.templating import Jinja2Templates
from pymongo import MongoClient

app = FastAPI()

conn = MongoClient("mongodb+srv://<fastapi>:<fastapi>@cluster0.h4y1llo.mongodb.net/")

app.mount("/static", StaticFiles(directory="static"), name="static")

templates = Jinja2Templates(directory="templates")

@app.get("/", response_class=HTMLResponse)
async def read_item(request: Request):
    return templates.TemplateResponse(
        request=request, name="index.html"
    )




@app.get('/item/{item}')
def item(item):
    var = f"item no:{item}"

    return {"key": var}