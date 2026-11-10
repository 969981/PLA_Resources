/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00159ad0; name: FUN_00159ad0
 */


undefined1 * FUN_00159ad0(long param_1,long param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if ((*(byte *)((long)puVar3 + 0x42) >> 1 & 1) != 0) {
    lVar4 = *(long *)*puVar3;
    if ((ulong)*(byte *)(lVar4 + 10) != 0) {
      lVar5 = 0;
      puVar7 = (undefined8 *)(lVar4 + 0x20);
      do {
        if (*(long *)*puVar7 == param_2) {
          lVar4 = *(long *)(*(long *)(*(long *)(lVar4 + 0x18) + 0x58) + lVar5);
          local_18 = &DAT_038f8f88;
          if (lVar4 != 0) {
            local_18 = (undefined *)(lVar4 + 0x18);
          }
          pcVar1 = "upvalue";
          goto LAB_00159bc0;
        }
        lVar5 = lVar5 + 0x10;
        puVar7 = puVar7 + 1;
      } while ((ulong)*(byte *)(lVar4 + 10) * 0x10 != lVar5);
    }
    uVar6 = param_2 - puVar3[4];
    if (((-0x10 < (long)uVar6) && ((long)uVar6 < (long)(puVar3[1] - puVar3[4]))) &&
       (pcVar1 = (char *)FUN_00159fa0(*(long *)(lVar4 + 0x18),
                                      (int)((ulong)(puVar3[5] -
                                                   *(long *)(*(long *)(lVar4 + 0x18) + 0x38)) >> 2)
                                      + -1,uVar6 >> 4,&local_18), pcVar1 != (char *)0x0)) {
LAB_00159bc0:
      puVar2 = (undefined1 *)FUN_00162fa0(param_1," (%s \'%s\')",pcVar1,local_18);
      return puVar2;
    }
  }
  return &DAT_03996322;
}


