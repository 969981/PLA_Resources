/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044a840; name: FUN_0044a840
 */


undefined8
FUN_0044a840(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined4 local_58 [10];
  
  local_60 = 0;
  puVar1 = &local_60;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  local_58[0] = param_5;
  if ((DAT_0439e918 == 0) || (iVar3 = FUN_00407710(DAT_0439e918,local_58), iVar3 < 0)) {
    lVar4 = FUN_00408a60(local_58,&DAT_03a0bf90,0x1b,0x28,&LAB_0044ab50);
  }
  else {
    lVar4 = FUN_00407970(DAT_0439e918,iVar3);
  }
  if (lVar4 == 0) {
    iVar3 = FUN_00449310(puVar1,param_2,param_3,param_4,DAT_04166848 & 0x2806);
  }
  else {
    uVar2 = DAT_04166848;
    if ((*(ulong *)(lVar4 + 0x20) & 2) != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    iVar3 = FUN_00449320(puVar1,param_2,param_3,param_4,uVar2 & *(ulong *)(lVar4 + 0x18),
                         *(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
  }
  if (iVar3 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar1;
  }
  return uVar5;
}


