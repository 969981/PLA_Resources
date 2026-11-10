/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4ac28; name: FUN_02e4ac28
 */


void FUN_02e4ac28(undefined8 param_1,int param_2,int param_3,long param_4)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar5 = param_4 + (long)param_2 * 0x30;
  *(int *)(param_4 + (long)param_2 * 4) = param_3;
  piVar6 = (int *)(param_4 + (long)param_3 * 4 + 0x4c);
  lVar2 = param_4 + (long)param_3 * 0x20;
  pauVar1 = (undefined1 (*) [16])(lVar2 + 0x60);
  if (*piVar6 == 0) {
    uVar4 = *(undefined8 *)(lVar5 + 200);
    *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(lVar5 + 0xb8);
    *(undefined8 *)(lVar2 + 0x78) = uVar4;
    uVar4 = *(undefined8 *)*(undefined1 (*) [16])(lVar5 + 0xb0);
    *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar5 + 0xc0);
    *(undefined8 *)*pauVar1 = uVar4;
  }
  else {
    auVar3 = *(undefined1 (*) [16])(lVar2 + 0x70);
    auVar8 = NEON_fmin(*(undefined1 (*) [16])(lVar5 + 0xb0),*pauVar1,4);
    auVar9 = *(undefined1 (*) [16])(param_4 + (long)param_2 * 0x30 + 0xc0);
    *(long *)(lVar2 + 0x68) = auVar8._8_8_;
    *(long *)*pauVar1 = auVar8._0_8_;
    auVar9 = NEON_fmax(auVar9,auVar3,4);
    *(long *)(lVar2 + 0x78) = auVar9._8_8_;
    *(long *)(lVar2 + 0x70) = auVar9._0_8_;
  }
  uVar7 = FUN_02e4a0cc();
  *(undefined4 *)(param_4 + (long)param_3 * 4 + 0xa0) = uVar7;
  *piVar6 = *piVar6 + 1;
  return;
}


