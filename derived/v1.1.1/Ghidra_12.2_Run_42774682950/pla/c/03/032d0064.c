/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d0064; name: FUN_032d0064
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_032d0064(long *param_1,long param_2,long param_3,long *param_4)

{
  long *__s;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long local_450;
  undefined4 local_448;
  
  FUN_032cf01c();
  *param_1 = (long)&PTR_LAB_0434a1d8;
  param_1[1] = (long)&PTR_LAB_0434a2a8;
  nn::os::InitializeMutex((MutexType *)(param_1 + 2),true,0);
  param_1[8] = param_2;
  param_1[9] = param_3;
  FUN_032cf01c(param_1 + 10);
  param_1[10] = (long)&PTR_LAB_0434a358;
  FUN_032ccf64(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0x6b) = 0;
  FUN_032ccf64(param_1 + 0x6e);
  FUN_032ccf64(param_1 + 0x7c);
  FUN_032ccf64(param_1 + 0x8a);
  FUN_032ccf64(param_1 + 0x98);
  FUN_032ccf64(param_1 + 0xa6);
  FUN_032ccf64(param_1 + 0xb4);
  FUN_032ccf64(param_1 + 0xc2);
  FUN_032ccf64(param_1 + 0xd0);
  FUN_032ccf64(param_1 + 0xde);
  FUN_032ccf64(param_1 + 0xec);
  FUN_032ccf64(param_1 + 0xfa);
  FUN_032ccf64(param_1 + 0x108);
  FUN_032ccf64(param_1 + 0x116);
  FUN_032ccf64(param_1 + 0x124);
  FUN_032ccf64(param_1 + 0x132);
  FUN_032ccf64(param_1 + 0x140);
  FUN_032ccf64(param_1 + 0x14e);
  FUN_032ccf64(param_1 + 0x15c);
  FUN_032ccf64(param_1 + 0x16a);
  FUN_032ccf64(param_1 + 0x178);
  FUN_032ccf64(param_1 + 0x186);
  FUN_032ccf64(param_1 + 0x194);
  FUN_032ccf64(param_1 + 0x1a2);
  FUN_032ccf64(param_1 + 0x1b0);
  FUN_032ccf64(param_1 + 0x1be);
  FUN_032ccf64(param_1 + 0x1cc);
  FUN_032ccf64(param_1 + 0x1da);
  FUN_032ccf64(param_1 + 0x1e8);
  FUN_032ccf64(param_1 + 0x1f6);
  FUN_032ccf64(param_1 + 0x204);
  FUN_032ccf64(param_1 + 0x212);
  FUN_032ccf64(param_1 + 0x220);
  FUN_032ccf64(param_1 + 0x22e);
  FUN_032ccf64(param_1 + 0x23c);
  FUN_032ccf64(param_1 + 0x24a);
  FUN_032ccf64(param_1 + 600);
  FUN_032ccf64(param_1 + 0x266);
  FUN_032ccf64(param_1 + 0x274);
  FUN_032ccf64(param_1 + 0x282);
  FUN_032ccf64(param_1 + 0x290);
  FUN_032ccf64(param_1 + 0x29e);
  *(undefined4 *)(param_1 + 0x2ad) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  (**(code **)(*param_1 + 0x80))(param_1,0x7fffffff);
  local_450 = 0;
  local_448 = 0;
  if (param_4 == (long *)0x0) {
    param_4 = &local_450;
    FUN_032d0818(&local_450);
  }
  lVar12 = 0x400;
  if (*param_4 != 0) {
    lVar12 = *param_4;
  }
  FUN_032d2088(param_1 + 10,0x20,8,lVar12,param_1[8]);
  __s = param_1 + 0x19;
  plVar11 = param_1 + 0x6e;
  plVar10 = param_1 + 0x2ac;
  param_1[0x6c] = (long)plVar11;
  param_1[0x6d] = (long)plVar10;
  memset(__s,0,0x148);
  puVar5 = PTR_PTR_0434a080;
  if (0 < (int)param_4[1]) {
    lVar12 = 0;
    do {
      uVar8 = param_4[lVar12 * 3 + 2];
      uVar2 = param_4[lVar12 * 3 + 3];
      uVar3 = param_4[lVar12 * 3 + 4];
      if (plVar10 <= plVar11) {
        CallSupervisor(0x26);
        plVar11 = (long *)param_1[0x6c];
      }
      param_1[0x6c] = (long)(plVar11 + 0xe);
      puVar9 = puVar5;
      if ((undefined *)param_1[8] != (undefined *)0x0) {
        puVar9 = (undefined *)param_1[8];
      }
      plVar11[10] = (long)puVar9;
      plVar11[0xb] = (long)(param_1 + 10);
      uVar1 = uVar2;
      if (uVar2 <= uVar8) {
        uVar1 = (uVar8 + uVar2) - 1 & -uVar2;
      }
      plVar11[4] = 0;
      plVar11[5] = uVar3;
      uVar8 = 0;
      if (uVar1 != 0) {
        uVar8 = uVar3 / uVar1;
      }
      plVar11[2] = 0;
      plVar11[3] = 0;
      plVar11[8] = 0;
      plVar11[9] = 0;
      plVar11[0xc] = 0;
      plVar11[0xd] = 0;
      *plVar11 = 0;
      plVar11[1] = uVar1;
      plVar11[6] = uVar2;
      plVar11[7] = uVar8;
      iVar4 = (int)param_1[0x6b];
      if (0 < iVar4) {
        lVar6 = (long)iVar4;
        plVar10 = param_1 + 0x42;
        do {
          if (*(ulong *)(*plVar10 + 8) == uVar1) {
            FUN_032cd00c(plVar11);
            if (plVar11 + 0xe == (long *)param_1[0x6c]) {
              param_1[0x6c] = (long)plVar11;
            }
            plVar11 = (long *)*plVar10;
            goto LAB_032d03cc;
          }
          lVar6 = lVar6 + -1;
          plVar10 = plVar10 + 1;
        } while (lVar6 != 0);
      }
      *(int *)(param_1 + 0x6b) = iVar4 + 1;
      param_1[(long)iVar4 + 0x42] = (long)plVar11;
LAB_032d03cc:
      *(long **)((long)param_1 + ((ulong)param_4[lVar12 * 3 + 2] >> 1 & 0x7ffffffffffffff8) + 200) =
           plVar11;
      lVar12 = lVar12 + 1;
      if ((int)param_4[1] <= lVar12) goto LAB_032d03fc;
      plVar11 = (long *)param_1[0x6c];
      plVar10 = (long *)param_1[0x6d];
    } while( true );
  }
LAB_032d0408:
  lVar12 = 0;
  param_1[0x41] = 0;
LAB_032d0410:
  if (param_1[0x40] == 0) {
    param_1[0x40] = lVar12;
    lVar6 = param_1[0x3f];
  }
  else {
    lVar6 = param_1[0x3f];
    lVar12 = param_1[0x40];
  }
  if (lVar6 == 0) {
    param_1[0x3f] = lVar12;
    lVar7 = param_1[0x3e];
  }
  else {
    lVar7 = param_1[0x3e];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x3e] = lVar12;
    lVar6 = param_1[0x3d];
  }
  else {
    lVar6 = param_1[0x3d];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x3d] = lVar12;
    lVar7 = param_1[0x3c];
  }
  else {
    lVar7 = param_1[0x3c];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x3c] = lVar12;
    lVar6 = param_1[0x3b];
  }
  else {
    lVar6 = param_1[0x3b];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x3b] = lVar12;
    lVar7 = param_1[0x3a];
  }
  else {
    lVar7 = param_1[0x3a];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x3a] = lVar12;
    lVar6 = param_1[0x39];
  }
  else {
    lVar6 = param_1[0x39];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x39] = lVar12;
    lVar7 = param_1[0x38];
  }
  else {
    lVar7 = param_1[0x38];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x38] = lVar12;
    lVar6 = param_1[0x37];
  }
  else {
    lVar6 = param_1[0x37];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x37] = lVar12;
    lVar7 = param_1[0x36];
  }
  else {
    lVar7 = param_1[0x36];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x36] = lVar12;
    lVar6 = param_1[0x35];
  }
  else {
    lVar6 = param_1[0x35];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x35] = lVar12;
    lVar7 = param_1[0x34];
  }
  else {
    lVar7 = param_1[0x34];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x34] = lVar12;
    lVar6 = param_1[0x33];
  }
  else {
    lVar6 = param_1[0x33];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x33] = lVar12;
    lVar7 = param_1[0x32];
  }
  else {
    lVar7 = param_1[0x32];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x32] = lVar12;
    lVar6 = param_1[0x31];
  }
  else {
    lVar6 = param_1[0x31];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x31] = lVar12;
    lVar7 = param_1[0x30];
  }
  else {
    lVar7 = param_1[0x30];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x30] = lVar12;
    lVar6 = param_1[0x2f];
  }
  else {
    lVar6 = param_1[0x2f];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x2f] = lVar12;
    lVar7 = param_1[0x2e];
  }
  else {
    lVar7 = param_1[0x2e];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x2e] = lVar12;
    lVar6 = param_1[0x2d];
  }
  else {
    lVar6 = param_1[0x2d];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x2d] = lVar12;
    lVar7 = param_1[0x2c];
  }
  else {
    lVar7 = param_1[0x2c];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x2c] = lVar12;
    lVar6 = param_1[0x2b];
  }
  else {
    lVar6 = param_1[0x2b];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x2b] = lVar12;
    lVar7 = param_1[0x2a];
  }
  else {
    lVar7 = param_1[0x2a];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x2a] = lVar12;
    lVar6 = param_1[0x29];
  }
  else {
    lVar6 = param_1[0x29];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x29] = lVar12;
    lVar7 = param_1[0x28];
  }
  else {
    lVar7 = param_1[0x28];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x28] = lVar12;
    lVar6 = param_1[0x27];
  }
  else {
    lVar6 = param_1[0x27];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x27] = lVar12;
    lVar7 = param_1[0x26];
  }
  else {
    lVar7 = param_1[0x26];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x26] = lVar12;
    lVar6 = param_1[0x25];
  }
  else {
    lVar6 = param_1[0x25];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x25] = lVar12;
    lVar7 = param_1[0x24];
  }
  else {
    lVar7 = param_1[0x24];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x24] = lVar12;
    lVar6 = param_1[0x23];
  }
  else {
    lVar6 = param_1[0x23];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x23] = lVar12;
    lVar7 = param_1[0x22];
  }
  else {
    lVar7 = param_1[0x22];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x22] = lVar12;
    lVar6 = param_1[0x21];
  }
  else {
    lVar6 = param_1[0x21];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x21] = lVar12;
    lVar7 = param_1[0x20];
  }
  else {
    lVar7 = param_1[0x20];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x20] = lVar12;
    lVar6 = param_1[0x1f];
  }
  else {
    lVar6 = param_1[0x1f];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x1f] = lVar12;
    lVar7 = param_1[0x1e];
  }
  else {
    lVar7 = param_1[0x1e];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x1e] = lVar12;
    lVar6 = param_1[0x1d];
  }
  else {
    lVar6 = param_1[0x1d];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x1d] = lVar12;
    lVar7 = param_1[0x1c];
  }
  else {
    lVar7 = param_1[0x1c];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x1c] = lVar12;
    lVar6 = param_1[0x1b];
  }
  else {
    lVar6 = param_1[0x1b];
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    param_1[0x1b] = lVar12;
    lVar7 = param_1[0x1a];
  }
  else {
    lVar7 = param_1[0x1a];
    lVar12 = lVar6;
  }
  if (lVar7 == 0) {
    param_1[0x1a] = lVar12;
    lVar6 = *__s;
  }
  else {
    lVar6 = *__s;
    lVar12 = lVar7;
  }
  if (lVar6 == 0) {
    *__s = lVar12;
  }
  return;
LAB_032d03fc:
  lVar12 = param_1[0x41];
  if (lVar12 != 0) goto LAB_032d0410;
  goto LAB_032d0408;
}


