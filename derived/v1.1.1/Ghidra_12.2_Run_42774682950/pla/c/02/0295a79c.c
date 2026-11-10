/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0295a79c; name: FUN_0295a79c
 */


void FUN_0295a79c(long param_1)

{
  long lVar1;
  undefined2 *puVar2;
  long lVar3;
  long lVar4;
  
  **(undefined8 **)(param_1 + 0x10) = 0;
  lVar4 = *(long *)(param_1 + 0xb0);
  *(undefined4 *)(lVar4 + 0x78) = 0;
  *(undefined8 *)(lVar4 + 0x70) = 0;
  FUN_0299a884(*(undefined8 *)(lVar4 + 0x50));
  lVar3 = *(long *)(lVar4 + 0x30);
  lVar4 = 0;
  *(undefined4 *)(lVar3 + 0xc08) = 0;
  do {
    lVar1 = lVar3 + lVar4;
    lVar4 = lVar4 + 0x60;
    *(undefined2 *)(*(long *)(lVar1 + 8) + 8) = 0;
    *(undefined2 *)(*(long *)(lVar1 + 0x28) + 8) = 0;
    *(undefined2 *)(*(long *)(lVar1 + 0x48) + 8) = 0;
  } while (lVar4 != 0xc00);
  lVar4 = *(long *)(param_1 + 0x110);
  lVar3 = *(long *)(lVar4 + 8);
  *(undefined4 *)(lVar3 + 10) = 0xffffffff;
  *(undefined2 *)(lVar3 + 0x1c) = 0x606;
  *(undefined1 *)(lVar3 + 0x1c8) = 0;
  *(undefined1 *)(lVar3 + 8) = 0;
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined1 *)(lVar3 + 0x16) = 0;
  *(undefined4 *)(lVar3 + 0x18) = 0;
  *(undefined2 *)(lVar3 + 0x14) = 0x61f;
  *(undefined4 *)(lVar3 + 0x1e) = 0;
  *(undefined1 *)(lVar3 + 0x22) = 0;
  *(undefined2 *)(lVar3 + 0x24) = 0xffff;
  *(undefined8 *)(lVar3 + 0x26) = 0;
  *(undefined8 *)(lVar3 + 0x2e) = 0;
  *(undefined8 *)(lVar3 + 0x36) = 0;
  *(undefined8 *)(lVar3 + 0x3e) = 0;
  **(undefined1 **)(lVar4 + 0x28) = 0;
  lVar3 = *(long *)(lVar4 + 0x48);
  *(undefined1 *)(lVar3 + 0xc) = 5;
  *(undefined4 *)(lVar3 + 8) = 0x5050505;
  lVar3 = *(long *)(lVar4 + 0x68);
  *(undefined8 *)(lVar3 + 0x1e) = 0;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 8) = 0;
  *(undefined8 *)(lVar4 + 200) = 0;
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 *)(lVar4 + 0xb8) = 0;
  *(undefined8 *)(lVar4 + 0xbd) = 0;
  *(undefined8 *)(lVar4 + 0x98) = 0;
  *(undefined8 *)(lVar4 + 0xa0) = 0;
  *(undefined8 *)(lVar4 + 0xa8) = 0;
  *(undefined8 *)(lVar4 + 0xb0) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0xf0) + 0xd88) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x150) + 0xe) = 0;
  puVar2 = *(undefined2 **)(param_1 + 0x170);
  *(undefined4 *)(puVar2 + 2) = 5;
  *puVar2 = 0x61f;
  *(undefined1 *)(puVar2 + 4) = 0;
  return;
}


