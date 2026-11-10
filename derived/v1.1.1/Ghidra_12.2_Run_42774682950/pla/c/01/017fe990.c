/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017fe990; name: FUN_017fe990
 */


void FUN_017fe990(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0xab0) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xab0);
  }
  else if (*(char *)(lVar2 + 0xb00) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xb00);
  }
  else if (*(char *)(lVar2 + 0xb50) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xb50);
  }
  else if (*(char *)(lVar2 + 0xba0) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xba0);
  }
  else if (*(char *)(lVar2 + 0xbf0) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xbf0);
  }
  else if (*(char *)(lVar2 + 0xc40) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xc40);
  }
  else if (*(char *)(lVar2 + 0xc90) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xc90);
  }
  else if (*(char *)(lVar2 + 0xce0) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xce0);
  }
  else if (*(char *)(lVar2 + 0xd30) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xd30);
  }
  else if (*(char *)(lVar2 + 0xd80) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xd80);
  }
  else if (*(char *)(lVar2 + 0xdd0) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xdd0);
  }
  else if (*(char *)(lVar2 + 0xe20) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xe20);
  }
  else if (*(char *)(lVar2 + 0xe70) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xe70);
  }
  else if (*(char *)(lVar2 + 0xec0) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xec0);
  }
  else if (*(char *)(lVar2 + 0xf10) == '\0') {
    puVar4 = (undefined1 *)(lVar2 + 0xf10);
  }
  else {
    if (*(char *)(lVar2 + 0xf60) != '\0') {
      return;
    }
    puVar4 = (undefined1 *)(lVar2 + 0xf60);
  }
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  FUN_00b63974(puVar4 + 0x10,param_2);
  *(undefined8 *)(puVar4 + 0x28) = 0;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  FUN_00cfa028(puVar4 + 0x20,param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(puVar4 + 0x38) = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(puVar4 + 0x40) = uVar1;
  *puVar4 = 1;
  *(undefined8 *)(puVar4 + 0x30) = uVar3;
  return;
}


