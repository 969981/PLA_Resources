/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0048ca70; name: FUN_0048ca70
 */


undefined8 FUN_0048ca70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1a0 [264];
  undefined1 auStack_98 [60];
  byte local_5c [55];
  byte local_25;
  undefined1 local_24;
  
  uVar1 = FUN_0048c9d0(local_5c,0x39,param_2);
  if ((int)uVar1 != 0) {
    local_5c[0] = local_5c[0] & 0xfc;
    local_25 = local_25 | 0x80;
    local_24 = 0;
    FUN_004933f0(auStack_98,local_5c,0x39);
    FUN_004939d0(auStack_98,auStack_98);
    FUN_004939d0(auStack_98,auStack_98);
    FUN_0048e140(auStack_1a0,*(undefined8 *)PTR_PTR_04374508,auStack_98);
    FUN_0048f980(param_1,auStack_1a0);
    FUN_004933e0(auStack_98);
    FUN_0048fbc0(auStack_1a0);
    FUN_004006a0(local_5c,0x39);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


