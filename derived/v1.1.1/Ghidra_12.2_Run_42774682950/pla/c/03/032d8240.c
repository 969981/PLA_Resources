/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d8240; name: FUN_032d8240
 */


void FUN_032d8240(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_68 [2];
  ulong local_58;
  undefined8 local_48;
  
  lVar2 = *param_1;
  uVar1 = FUN_032e35d8(*(undefined8 *)(lVar2 + 8));
  local_68[0] = FUN_032dd9d0(uVar1);
  FUN_032c6810(param_2,"hk::Presets(type = {}, builtinType={}, strict = {}, {{",&DAT_0434ab78,
               (undefined8 *)(lVar2 + 8),local_68,lVar2);
  if (0 < *(int *)(lVar2 + 0x10)) {
    uVar3 = 0;
    do {
      local_48 = *(undefined8 *)(*(long *)(lVar2 + 0x18) + uVar3 * 8);
      FUN_032d6ab8(local_68,lVar2,uVar3 & 0xffffffff);
      if (uVar3 != 0) {
        FUN_032c5d4c(param_2,&DAT_038ee629,0xffffffff);
      }
      FUN_032c6910(param_2,"{}={:*!}",&DAT_0434ab98,&local_48,local_68);
      if ((local_58 & 1) != 0) {
        FUN_032e0c40(local_58 & 0xfffffffffffffffe);
      }
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x10));
  }
  FUN_032c5d4c(param_2,&DAT_038e3f97,0xffffffff);
  return;
}


