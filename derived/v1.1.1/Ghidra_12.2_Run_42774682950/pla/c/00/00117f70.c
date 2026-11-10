/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00117f70; name: FUN_00117f70
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00117f70(ulong *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  ulong in_x10;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  
  param_1[2] = (ulong)param_2;
  param_1[3] = (ulong)param_2;
  bVar1 = *param_2;
  param_1[2] = (ulong)(param_2 + 1);
  if ((bVar1 < 0x90) ||
     (iVar5 = FUN_0010a390("v:\\devel\\projects\\oodle2\\core\\rrrans64dual.cpp",0x6d,
                           "rrRANS64DualDecodeInit","nb >= 0 && nb <= 8"), in_x10 = extraout_x10,
     iVar5 == 0)) {
    pbVar6 = (byte *)param_1[2];
    bVar2 = bVar1 >> 4;
    if (bVar2 == 0) {
      uVar7 = 0;
      bVar2 = *pbVar6;
      param_1[2] = (ulong)(pbVar6 + 1);
    }
    else {
      if (bVar2 == 1) {
        uVar7 = 0;
      }
      else {
        in_x10 = 0;
        iVar5 = (bVar1 >> 4 & 1) - (uint)bVar2;
        pbVar8 = pbVar6;
        do {
          pbVar6 = pbVar8 + 2;
          bVar2 = *pbVar8;
          param_1[2] = (ulong)(pbVar8 + 1);
          bVar3 = pbVar8[1];
          param_1[2] = (ulong)pbVar6;
          in_x10 = (ulong)bVar3 | ((ulong)bVar2 | (in_x10 & 0xffffffffffff) << 8) << 8;
          iVar5 = iVar5 + 2;
          pbVar8 = pbVar6;
        } while (iVar5 != 0);
        uVar7 = in_x10 << 8;
      }
      if ((bVar1 >> 4 & 1) != 0) {
        in_x10 = uVar7 | *pbVar6;
        param_1[2] = (ulong)(pbVar6 + 1);
        pbVar6 = pbVar6 + 1;
      }
      uVar7 = in_x10 << 4;
      bVar2 = *pbVar6;
      param_1[2] = (ulong)(pbVar6 + 1);
    }
    if ((bVar2 < 0x90) ||
       (iVar5 = FUN_0010a390("v:\\devel\\projects\\oodle2\\core\\rrrans64dual.cpp",0x84,
                             "rrRANS64DualDecodeInit","nb >= 0 && nb <= 8"),
       in_x10 = extraout_x10_00, iVar5 == 0)) {
      bVar3 = bVar2 >> 4;
      if (bVar3 == 0) {
        uVar9 = 0;
      }
      else {
        pbVar6 = (byte *)param_1[2];
        if (bVar3 == 1) {
          uVar9 = 0;
        }
        else {
          in_x10 = 0;
          iVar5 = (bVar2 >> 4 & 1) - (uint)bVar3;
          pbVar8 = pbVar6;
          do {
            pbVar6 = pbVar8 + 2;
            bVar3 = *pbVar8;
            param_1[2] = (ulong)(pbVar8 + 1);
            bVar4 = pbVar8[1];
            param_1[2] = (ulong)pbVar6;
            in_x10 = (ulong)bVar4 | ((ulong)bVar3 | (in_x10 & 0xffffffffffff) << 8) << 8;
            iVar5 = iVar5 + 2;
            pbVar8 = pbVar6;
          } while (iVar5 != 0);
          uVar9 = in_x10 << 8;
        }
        if ((bVar2 >> 4 & 1) != 0) {
          in_x10 = uVar9 | *pbVar6;
          param_1[2] = (ulong)(pbVar6 + 1);
        }
        uVar9 = in_x10 << 4;
      }
      *param_1 = uVar7 | (ulong)bVar1 & 0xf;
      param_1[1] = uVar9 | (ulong)bVar2 & 0xf;
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


