/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309b9e0; name: FUN_0309b9e0
 */


void FUN_0309b9e0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined2 uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  char cVar7;
  char cVar8;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_58 = 0;
  local_50 = -0x8000000000000000;
  FUN_0309bb78(&local_58,param_2,param_3,1);
  uVar6 = *(ulong *)(param_3 + 8) & 0xffffff;
  if (uVar6 == 0xffffff) {
    bVar4 = false;
    cVar7 = -1;
  }
  else {
    cVar7 = *(char *)(*(long *)(param_2 + 0xf8) + uVar6);
    bVar4 = (*(byte *)(*(long *)(param_2 + 0x38) + uVar6 * 0xc0 + 0x54) & 9) == 0;
  }
  uVar6 = *(ulong *)(param_3 + 0x18) & 0xffffff;
  if (uVar6 == 0xffffff) {
    bVar5 = false;
    cVar8 = -1;
  }
  else {
    cVar8 = *(char *)(*(long *)(param_2 + 0xf8) + uVar6);
    bVar5 = (*(byte *)(*(long *)(param_2 + 0x38) + uVar6 * 0xc0 + 0x54) & 9) == 0;
  }
  if ((cVar7 == -1) && (cVar8 == -1)) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = *(undefined2 *)
             (DAT_04434b38 + (ulong)((uint)(byte)(cVar8 + 1) * 0x21 + (uint)(byte)(cVar7 + 1)) * 2 +
             0x18);
  }
  if ((bool)(bVar5 | bVar4)) {
    *(undefined2 *)(local_58 + 2) = uVar1;
  }
  FUN_0309a860(param_1,param_2,param_3,*(undefined8 *)(*(long *)(param_2 + 0x488) + 0x38),&local_58,
               0,(int)local_50 + -1,param_4,param_5,param_6);
  lVar2 = local_50;
  uVar3 = local_50._4_4_;
  local_50 = (ulong)local_50._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_58 != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_58,0xc,uVar3 & 0x3fffffff);
  }
  return;
}


