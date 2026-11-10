/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d5e24; name: FUN_032d5e24
 */


void FUN_032d5e24(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  FUN_032d5f10();
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x38d490);
  if (lVar2 == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar2;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x10);
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined8 *)((long)puVar3 + 0x24) = 0xffffffffffffffff;
  *puVar3 = 0;
  puVar3[1] = 0;
  lVar4 = (long)DAT_04449ef4;
  if (lVar2 == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar2;
  }
  *(undefined8 *)(lVar2 + lVar4 * 8 + 0x18) = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((long)puVar3 + 0x24) = 0xffffffff;
  *puVar3 = 0;
  puVar3[1] = 0;
  return;
}


