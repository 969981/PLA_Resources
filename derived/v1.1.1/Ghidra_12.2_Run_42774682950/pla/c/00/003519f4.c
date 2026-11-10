/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003519f4; name: FUN_003519f4
 */


void FUN_003519f4(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  byte local_68 [16];
  undefined8 local_58;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  
  uVar1 = FUN_0032b79c(param_2 + 0x18,param_3);
  uVar2 = FUN_0032b79c(param_2 + 0x18,param_3);
  FUN_0034b2f0(local_68,"Import \"",uVar2);
                    /* try { // try from 00351a44 to 00351a57 has its CatchHandler @ 00351b04 */
  puVar3 = (ulong *)FUN_002e4094(local_68,"\" was listed twice.",0x13);
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  local_40 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 00351a70 to 00351a87 has its CatchHandler @ 00351acc */
  FUN_0034db00(param_1,uVar1,param_2,9,&local_50);
  if ((local_50 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_40);
  }
  if ((local_68[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
  }
  return;
}


