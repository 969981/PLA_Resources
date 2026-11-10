/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00351b28; name: FUN_00351b28
 */


void FUN_00351b28(long *param_1,long param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte local_70 [16];
  undefined8 local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  byte local_48;
  undefined1 uStack_47;
  undefined6 uStack_46;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined1 *local_38;
  
  local_40 = 0;
  uStack_3f = 0;
  local_38 = (undefined1 *)0x0;
  local_48 = 0;
  uStack_47 = 0;
  uStack_46 = 0;
  if (*(long *)(*param_1 + 8) == 0) {
                    /* try { // try from 00351b94 to 00351baf has its CatchHandler @ 00351ce8 */
    uVar2 = FUN_0032b79c(param_2 + 0x18,param_3);
    FUN_0034b2f0(local_70,"Import \"",uVar2);
                    /* try { // try from 00351bb0 to 00351bc3 has its CatchHandler @ 00351c9c */
    pbVar3 = (byte *)FUN_002e4094(local_70,"\" has not been loaded.",0x16);
  }
  else {
                    /* try { // try from 00351b5c to 00351b77 has its CatchHandler @ 00351cec */
    uVar2 = FUN_0032b79c(param_2 + 0x18,param_3);
    FUN_0034b2f0(local_70,"Import \"",uVar2);
                    /* try { // try from 00351b78 to 00351b8b has its CatchHandler @ 00351cac */
    pbVar3 = (byte *)FUN_002e4094(local_70,"\" was not found or had errors.",0x1e);
  }
  uVar2 = *(undefined8 *)(pbVar3 + 0x10);
  bVar1 = *pbVar3;
  uStack_50 = (undefined7)((ulong)*(undefined8 *)(pbVar3 + 8) >> 8);
  uStack_58 = (undefined7)*(undefined8 *)(pbVar3 + 1);
  local_51 = (undefined1)((ulong)*(undefined8 *)(pbVar3 + 1) >> 0x38);
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
  if ((local_48 & 1) != 0) {
    *local_38 = 0;
    local_40 = 0;
    uStack_3f = 0;
    if ((local_48 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_38);
    }
  }
  uStack_47 = (undefined1)uStack_58;
  uStack_46 = (undefined6)((uint7)uStack_58 >> 8);
  uStack_58 = 0;
  local_40 = local_51;
  uStack_3f = uStack_50;
  local_51 = 0;
  uStack_50 = 0;
  local_48 = bVar1;
  local_38 = (undefined1 *)uVar2;
  if ((local_70[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
                    /* try { // try from 00351c50 to 00351c6f has its CatchHandler @ 00351cf0 */
  uVar2 = FUN_0032b79c(param_2 + 0x18,param_3);
  FUN_0034db00(param_1,uVar2,param_2,9,&local_48);
  if ((local_48 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38);
  }
  return;
}


