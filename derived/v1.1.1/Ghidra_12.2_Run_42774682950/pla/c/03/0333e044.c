/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333e044; name: FUN_0333e044
 */


/* WARNING: Removing unreachable block (ram,0x0333e068) */

void FUN_0333e044(undefined1 (*param_1) [16],long param_2,uint param_3)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3 = *param_1;
  auVar4 = param_1[1];
  if (0 < (int)param_3) {
    if (param_3 == 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      do {
        pauVar1 = (undefined1 (*) [16])(param_2 + lVar2 * 0x10);
        lVar2 = lVar2 + 2;
        auVar3 = NEON_fmin(auVar3,*pauVar1,4);
        auVar4 = NEON_fmax(auVar4,*pauVar1,4);
        auVar3 = NEON_fmin(auVar3,pauVar1[1],4);
        auVar4 = NEON_fmax(auVar4,pauVar1[1],4);
      } while ((ulong)param_3 - ((ulong)param_3 & 1) != lVar2);
      if ((param_3 & 1) == 0) goto LAB_0333e0a8;
    }
    pauVar1 = (undefined1 (*) [16])(param_2 + lVar2 * 0x10);
    auVar4 = NEON_fmax(auVar4,*pauVar1,4);
    auVar3 = NEON_fmin(auVar3,*pauVar1,4);
  }
LAB_0333e0a8:
  *(long *)(*param_1 + 8) = auVar3._8_8_;
  *(long *)*param_1 = auVar3._0_8_;
  *(long *)(param_1[1] + 8) = auVar4._8_8_;
  *(long *)param_1[1] = auVar4._0_8_;
  return;
}


