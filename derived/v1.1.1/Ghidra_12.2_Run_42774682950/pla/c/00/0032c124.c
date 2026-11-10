/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032c124; name: FUN_0032c124
 */


void FUN_0032c124(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = param_2;
  if ((param_3 == 0) && (param_4 != 0)) {
    FUN_0032c248(param_4,param_2);
  }
  else if (param_4 != param_3) {
    if (param_4 == 0) {
      pbVar3 = (byte *)FUN_002e2e80(PTR_FUN_04373078,0x18);
      if (pbVar3 != (byte *)0x0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        pbVar3[2] = 0;
        pbVar3[3] = 0;
        pbVar3[4] = 0;
        pbVar3[5] = 0;
        pbVar3[6] = 0;
        pbVar3[7] = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
        pbVar3[0x10] = 0;
        pbVar3[0x11] = 0;
        pbVar3[0x12] = 0;
        pbVar3[0x13] = 0;
        pbVar3[0x14] = 0;
        pbVar3[0x15] = 0;
        pbVar3[0x16] = 0;
        pbVar3[0x17] = 0;
      }
    }
    else {
      if (*(long *)(param_4 + 0x70) != 0) {
        FUN_0032cf88(param_4,0,0x18);
      }
      pbVar3 = (byte *)FUN_0032c850(param_4,0x18,PTR_LAB_043730d0);
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      pbVar3[0x10] = 0;
      pbVar3[0x11] = 0;
      pbVar3[0x12] = 0;
      pbVar3[0x13] = 0;
      pbVar3[0x14] = 0;
      pbVar3[0x15] = 0;
      pbVar3[0x16] = 0;
      pbVar3[0x17] = 0;
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
    }
    if (pbVar3 != param_2) {
      uVar1 = *(ulong *)(param_2 + 8);
      pbVar2 = *(byte **)(param_2 + 0x10);
      if ((*param_2 & 1) == 0) {
        pbVar2 = param_2 + 1;
        uVar1 = (ulong)(*param_2 >> 1);
      }
      FUN_00291910(pbVar3,pbVar2,uVar1);
    }
    if ((param_2 != (byte *)0x0) && (param_3 == 0)) {
      if ((*param_2 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_2 + 0x10));
      }
      FUN_002e2ea0(PTR_LAB_04373088,param_2);
    }
  }
  FUN_0032bdbc(param_1,pbVar3);
  return;
}


