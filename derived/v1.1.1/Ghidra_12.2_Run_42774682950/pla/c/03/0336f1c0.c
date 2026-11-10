/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0336f1c0; name: FUN_0336f1c0
 */


void FUN_0336f1c0(long param_1,double *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_d0 [16];
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_88;
  
  FUN_03373ca0(param_1 + 0x20,param_1 + 0x60,param_1 + 0xa0,&local_c0);
  dVar10 = local_c0 / dStack_a8;
  uVar2 = (ulong)dVar10 & 0x7ff0000000000000;
  if (uVar2 < 0x340000000000001) {
    uVar2 = 0x340000000000000;
  }
  dVar5 = (double)FUN_032c8f00((double)(uVar2 + 0xfcc0000000000000) / dStack_a8);
  dVar12 = local_88 / dStack_a8;
  dVar6 = (double)FUN_032c8f00(dVar10 * dVar12);
  dVar11 = dStack_b8 / dStack_a8;
  uVar3 = (ulong)dVar11 & 0x7ff0000000000000;
  if (uVar3 < 0x340000000000001) {
    uVar3 = 0x340000000000000;
  }
  dVar7 = (double)FUN_032c8f00((double)(uVar3 + 0xfcc0000000000000) / dStack_a8);
  dVar8 = (double)FUN_032c8f00(dVar11 * dVar12);
  local_b0 = local_b0 / dStack_a8;
  uVar4 = (ulong)local_b0 & 0x7ff0000000000000;
  if (uVar4 < 0x340000000000001) {
    uVar4 = 0x340000000000000;
  }
  dVar9 = (double)FUN_032c8f00((double)(uVar4 + 0xfcc0000000000000) / dStack_a8);
  dVar12 = (double)FUN_032c8f00(local_b0 * dVar12);
  bVar1 = 1.0 <= dVar12 + dVar9 + (double)(uVar4 + 0xfcc0000000000000);
  dVar12 = local_b0;
  if (((1.0 <= dVar6 + dVar5 + (double)(uVar2 + 0xfcc0000000000000) &&
       1.0 <= dVar8 + dVar7 + (double)(uVar3 + 0xfcc0000000000000)) && bVar1) && bVar1) {
    FUN_0336f580(param_1,local_d0);
    dVar10 = (double)local_d0._0_4_;
    dVar11 = (double)local_d0._4_4_;
    dVar12 = (double)local_d0._8_4_;
    local_b0 = (double)local_d0._12_4_;
  }
  *param_2 = dVar10;
  param_2[1] = dVar11;
  param_2[2] = dVar12;
  param_2[3] = local_b0;
  return;
}


