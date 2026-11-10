/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e1def8; name: FUN_02e1def8
 */


undefined8
FUN_02e1def8(float param_1,float param_2,uint *param_3,long *param_4,uint *param_5,uint param_6)

{
  long lVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = 1.0 - (double)param_2 * (double)param_2;
  dVar3 = (double)NEON_ucvtf((ulong)param_5[3]);
  dVar3 = (dVar3 * -1.7269388197455346) / ((double)param_6 * (double)param_1);
  if (1.0 < dVar3 * dVar5) {
    dVar5 = 1.0 / dVar3;
  }
  uVar2 = *param_5;
  if (uVar2 < 5) {
    uVar2 = 4;
  }
  *param_3 = uVar2;
  lVar1 = (**(code **)(*param_4 + 0x10))(param_4,uVar2 * 4 + 0xc & 0xfffffff0);
  *(long *)(param_3 + 2) = lVar1;
  if (lVar1 != 0) {
    param_3[4] = 0;
    uVar2 = param_5[1];
    if (uVar2 < 5) {
      uVar2 = 4;
    }
    param_3[6] = uVar2;
    lVar1 = (**(code **)(*param_4 + 0x10))(param_4,uVar2 * 4 + 0xc & 0xfffffff0);
    *(long *)(param_3 + 8) = lVar1;
    if (lVar1 != 0) {
      param_3[10] = 0;
      uVar2 = param_5[2];
      if (uVar2 < 5) {
        uVar2 = 4;
      }
      param_3[0xc] = uVar2;
      lVar1 = (**(code **)(*param_4 + 0x10))(param_4,uVar2 * 4 + 0xc & 0xfffffff0);
      *(long *)(param_3 + 0xe) = lVar1;
      if (lVar1 != 0) {
        param_3[0x10] = 0;
        uVar2 = param_5[3];
        if (uVar2 < 5) {
          uVar2 = 4;
        }
        param_3[0x12] = uVar2;
        lVar1 = (**(code **)(*param_4 + 0x10))(param_4,uVar2 * 4 + 0xc & 0xfffffff0);
        *(long *)(param_3 + 0x14) = lVar1;
        if (lVar1 != 0) {
          dVar4 = 1.0 / ((double)param_6 * (double)param_1);
          param_3[0x16] = 0;
          dVar3 = (double)NEON_ucvtf((ulong)*param_5);
          dVar7 = dVar3 * -3.0 * dVar4;
          dVar3 = exp2(dVar7 * 3.321928094887362);
          dVar6 = 0.5756462732485116 -
                  (double)(float)SQRT(1.0 - dVar5) * (double)(float)SQRT(1.0 - dVar5) *
                  0.5756462732485116;
          dVar5 = (double)NEON_fminnm(dVar7 * dVar6,0x3feff7ced916872b);
          param_3[0x19] = (uint)(float)(dVar3 - dVar3 * dVar5);
          param_3[0x1a] = (uint)-(float)dVar5;
          dVar3 = (double)NEON_ucvtf((ulong)param_5[1]);
          dVar5 = dVar3 * -3.0 * dVar4;
          dVar3 = exp2(dVar5 * 3.321928094887362);
          dVar5 = (double)NEON_fminnm(dVar5 * dVar6,0x3feff7ced916872b);
          param_3[0x1c] = (uint)(float)(dVar3 - dVar3 * dVar5);
          param_3[0x1d] = (uint)-(float)dVar5;
          dVar3 = (double)NEON_ucvtf((ulong)param_5[2]);
          dVar5 = dVar3 * -3.0 * dVar4;
          dVar3 = exp2(dVar5 * 3.321928094887362);
          dVar5 = (double)NEON_fminnm(dVar5 * dVar6,0x3feff7ced916872b);
          param_3[0x1f] = (uint)(float)(dVar3 - dVar3 * dVar5);
          param_3[0x20] = (uint)-(float)dVar5;
          dVar3 = (double)NEON_ucvtf((ulong)param_5[3]);
          dVar4 = dVar3 * -3.0 * dVar4;
          dVar3 = exp2(dVar4 * 3.321928094887362);
          dVar5 = (double)NEON_fminnm(dVar4 * dVar6,0x3feff7ced916872b);
          param_3[0x22] = (uint)(float)(dVar3 - dVar3 * dVar5);
          param_3[0x23] = (uint)-(float)dVar5;
          return 1;
        }
      }
    }
  }
  return 0x34;
}


