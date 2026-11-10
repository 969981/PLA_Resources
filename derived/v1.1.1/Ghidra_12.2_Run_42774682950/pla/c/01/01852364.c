/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01852364; name: FUN_01852364
 */


void FUN_01852364(long param_1)

{
  char cVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    cVar1 = *(char *)(param_1 + 0x69);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x70);
    FUN_01852e98(*(undefined8 *)(lVar2 + 8),lVar2,*(undefined8 *)(lVar2 + 0x10));
    *(undefined1 *)(param_1 + 0x68) = 0;
    cVar1 = *(char *)(param_1 + 0x69);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x6a);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x90);
    FUN_01852e98(*(undefined8 *)(lVar2 + 8),lVar2,*(undefined8 *)(lVar2 + 0x10));
    *(undefined1 *)(param_1 + 0x69) = 0;
    cVar1 = *(char *)(param_1 + 0x6a);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x6b);
  }
  else {
    lVar2 = *(long *)(param_1 + 0xb0);
    FUN_01852e98(*(undefined8 *)(lVar2 + 8),lVar2,*(undefined8 *)(lVar2 + 0x10));
    *(undefined1 *)(param_1 + 0x6a) = 0;
    cVar1 = *(char *)(param_1 + 0x6b);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x6c);
  }
  else {
    lVar2 = *(long *)(param_1 + 0xd0);
    FUN_01852e98(*(undefined8 *)(lVar2 + 8),lVar2,*(undefined8 *)(lVar2 + 0x10));
    *(undefined1 *)(param_1 + 0x6b) = 0;
    cVar1 = *(char *)(param_1 + 0x6c);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x6d);
  }
  else {
    lVar2 = *(long *)(param_1 + 0xf0);
    FUN_01852e98(*(undefined8 *)(lVar2 + 8),lVar2,*(undefined8 *)(lVar2 + 0x10));
    *(undefined1 *)(param_1 + 0x6c) = 0;
    cVar1 = *(char *)(param_1 + 0x6d);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x6e);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x110);
    FUN_01852e98(*(undefined8 *)(lVar2 + 8),lVar2,*(undefined8 *)(lVar2 + 0x10));
    *(undefined1 *)(param_1 + 0x6d) = 0;
    cVar1 = *(char *)(param_1 + 0x6e);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x6f);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x130);
    FUN_01852e98(*(undefined8 *)(lVar2 + 8),lVar2,*(undefined8 *)(lVar2 + 0x10));
    *(undefined1 *)(param_1 + 0x6e) = 0;
    cVar1 = *(char *)(param_1 + 0x6f);
  }
  if (cVar1 != '\0') {
    lVar2 = *(long *)(param_1 + 0x150);
    FUN_01852e98(*(undefined8 *)(lVar2 + 8),lVar2,*(undefined8 *)(lVar2 + 0x10));
    *(undefined1 *)(param_1 + 0x6f) = 0;
  }
  return;
}


