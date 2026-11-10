/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025a0a4; name: FUN_0025a0a4
 */


void FUN_0025a0a4(undefined8 param_1,long param_2,char *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  lVar4 = *(long *)(param_2 + 0xb8);
  if (param_2 + 0xb0 != lVar4) {
    lVar5 = lVar4;
    do {
      iVar1 = strcmp((char *)(lVar5 + 0x10),param_3);
      if (iVar1 == 0) {
        if (lVar5 == 0) {
          return;
        }
        iVar1 = strcmp((char *)(lVar4 + 0x10),param_3);
        while (iVar1 != 0) {
          lVar4 = *(long *)(lVar4 + 8);
          iVar1 = strcmp((char *)(lVar4 + 0x10),param_3);
        }
        uVar6 = *(undefined4 *)(lVar4 + 0x40);
        uVar2 = FUN_0025ab58(param_1,param_2 + 0xa0,param_3);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)(param_2 + 0xb8);
        iVar1 = strcmp((char *)(lVar4 + 0x10),param_3);
        while (iVar1 != 0) {
          lVar4 = *(long *)(lVar4 + 8);
          iVar1 = strcmp((char *)(lVar4 + 0x10),param_3);
        }
        plVar3 = *(long **)(param_2 + 0xd8);
        if (plVar3 == (long *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0025a19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x20))
                  (uVar6,*(undefined4 *)(lVar4 + 0x40),plVar3,*(undefined8 *)(param_2 + 8),param_3);
        return;
      }
      lVar5 = *(long *)(lVar5 + 8);
    } while (param_2 + 0xb0 != lVar5);
  }
  return;
}


