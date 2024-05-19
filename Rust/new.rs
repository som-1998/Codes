fn main(){
    let mut one = 1;
    println!("{}", one);
    println!("{} - byte", std::mem::size_of_val(&one));
    one = one as i16;  
    println!("{} - byte", std::mem::size_of_val(&one));
     
}