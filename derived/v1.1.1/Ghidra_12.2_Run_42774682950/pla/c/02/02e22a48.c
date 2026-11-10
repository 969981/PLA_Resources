/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e22a48; name: FUN_02e22a48
 */


undefined8 FUN_02e22a48(long param_1,long param_2,void *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x20);
  if (plVar6 == (long *)0x0) {
LAB_02e22a98:
    if (plVar6 != (long *)0x0) {
      if (param_4 != 0) {
        uVar3 = *(uint *)(plVar6 + 4);
        do {
          if (uVar3 == 0) {
            uVar4 = FUN_02e225fc(plVar6);
            if ((uVar4 & 1) == 0) {
              return 0;
            }
            uVar3 = *(uint *)(plVar6 + 4);
          }
          uVar2 = 0x20000 - uVar3;
          if (param_4 <= 0x20000 - uVar3) {
            uVar2 = param_4;
          }
          memcpy((void *)(*(long *)(plVar6[2] + (ulong)*(uint *)(plVar6 + 3) * 8 + -8) +
                         (ulong)uVar3),param_3,(ulong)uVar2);
          if (*(short *)((long)plVar6 + 0x7a) == 0) {
            iVar5 = (int)plVar6[0xe] + uVar2;
            *(int *)(plVar6 + 0xe) = iVar5;
            iVar5 = iVar5 + 0x3c;
          }
          else {
            iVar5 = (int)plVar6[0xc] + uVar2;
            *(int *)(plVar6 + 0xc) = iVar5;
            iVar5 = iVar5 + 0x2c;
          }
          *(int *)((long)plVar6 + 0x34) = iVar5;
          uVar1 = (int)plVar6[4] + uVar2;
          uVar3 = 0;
          if (uVar1 != 0x20000) {
            uVar3 = uVar1;
          }
          param_4 = param_4 - uVar2;
          param_3 = (void *)((long)param_3 + (ulong)uVar2);
          *(uint *)(plVar6 + 4) = uVar3;
        } while (param_4 != 0);
      }
      return 1;
    }
  }
  else {
    do {
      if (plVar6[1] == param_2) goto LAB_02e22a98;
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return 0;
}


