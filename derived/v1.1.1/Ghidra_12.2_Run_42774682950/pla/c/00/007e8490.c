/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e8490; name: FUN_007e8490
 */


/* WARNING: Removing unreachable block (ram,0x007e8544) */

void FUN_007e8490(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  uVar2 = FUN_007e2d00(0x18,0);
  if ((uVar2 & 1) == 0) {
    local_48[0] = 0x1040c;
  }
  else {
    uVar2 = FUN_007e30d0();
    puVar1 = PTR_DAT_04377458;
    if ((uVar2 & 1) == 0) {
      local_48[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_04377458 == 0) {
      uVar3 = FUN_007e336c();
      puVar4 = (undefined8 *)FUN_0081a7a0(0x90,uVar3,8);
      if (puVar4 == (undefined8 *)0x0) {
        local_48[0] = 0x10401;
        *(undefined8 *)PTR_DAT_043774a0 = 0;
      }
      else {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        puVar4[0xd] = 0;
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
        puVar4[0x10] = 0;
        puVar4[0x11] = 0;
        *(undefined8 **)PTR_DAT_043774a0 = puVar4;
        FUN_007e864c(puVar4,0x18,0);
        *(undefined8 **)puVar1 = puVar4;
        local_48[0] = 0;
      }
    }
    else {
      local_48[0] = 0x1040f;
    }
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


