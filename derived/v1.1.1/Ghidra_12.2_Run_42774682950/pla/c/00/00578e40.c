/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00578e40; name: FUN_00578e40
 */


void FUN_00578e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  byte local_98 [16];
  ulong local_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  if ((DAT_0439edc8 == (code *)0x0) ||
     (iVar4 = (*DAT_0439edc8)(param_4,param_5,param_6,param_7), iVar4 == 0)) {
    local_80 = *param_4;
    puStack_78 = PTR_LAB_043737d8;
    local_70 = param_4[3];
    puStack_68 = PTR_LAB_043737d8;
    FUN_002e6390(local_98,"HTTP:GET:%s:%s",0xe,&local_80,2);
    uVar3 = local_88;
    bVar2 = local_98[0];
                    /* try { // try from 00578edc to 00578f1b has its CatchHandler @ 00578f54 */
    FUN_0057a6e0(&local_80,param_4);
    uVar1 = (ulong)local_98 | 1;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar3;
    }
    FUN_00578f80(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar1,&local_80);
    if ((local_98[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_88);
    }
  }
  return;
}


