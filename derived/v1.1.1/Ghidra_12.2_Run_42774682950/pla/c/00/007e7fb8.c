/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e7fb8; name: FUN_007e7fb8
 */


void FUN_007e7fb8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  uVar2 = FUN_007e2d00();
  if ((uVar2 & 1) == 0) {
    local_38[0] = 0x1040c;
  }
  else {
    uVar2 = FUN_007e30d0();
    puVar1 = PTR_DAT_04377480;
    if ((uVar2 & 1) == 0) {
      local_38[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_04377480 == 0) {
      uVar3 = FUN_007e336c();
      puVar4 = (undefined8 *)FUN_0081a7a0(8,uVar3,8);
      if (puVar4 == (undefined8 *)0x0) {
        local_38[0] = 0x10401;
        *(undefined8 *)PTR_DAT_04377488 = 0;
      }
      else {
        *(undefined8 **)PTR_DAT_04377488 = puVar4;
        *puVar4 = 0x5dc;
        *(undefined8 **)puVar1 = puVar4;
        local_38[0] = 0;
      }
    }
    else {
      local_38[0] = 0x1040f;
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


