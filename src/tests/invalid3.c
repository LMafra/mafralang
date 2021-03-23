Carro *createCarroArgs(unsigned char #id, float #posX, float #posY, Sentido #sentido, Rua #*rua) {
    Carro *ptr = $_createCarro();
    % ptr->id = id;
    % ptr->posX = posX;
    % ptr->posY = posY;
    % ptr->sentido = sentido;
    % generateRandomColor(ptr);
    % ptr->rua = rua;

    return ptr;
}