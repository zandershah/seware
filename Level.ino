void SetMemory(GameState *gs, int words, int shapes) {
  gs->numWords = words;
  gs->words = (Word*) malloc(sizeof(Word) * gs->numWords);
  gs->numShapes = shapes;
  gs->shapes = (Shape*) malloc(sizeof(Shape) * gs->numShapes);
}

void Reset(GameState *gs) {
  free(gs->words);
  gs->words = NULL;
  
  free(gs->shapes);
  gs->shapes = NULL;

  for (int i = 0; i < LED_COUNT; i++) {
    digitalWrite(LEDS[i], LOW);
  }
    
  gs->needsReset = true;
}

void UpdatePosition(Position *p) {
  if (!p) {
    return;
  }
  
  double elapsedTime = millis() - p->prevTime;
  
  p->dX += (elapsedTime / 1000.0) * p->vX;
  p->dY += (elapsedTime / 1000.0) * p->vY;

  p->x = (int) (p->dX +1);
  p->y = (int) (p->dY +1);
  
  p->prevTime = millis();
}







