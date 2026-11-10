/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ed0d0; name: FUN_007ed0d0
 */


void FUN_007ed0d0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  uVar2 = FUN_007e2d00();
  if ((uVar2 & 1) == 0) {
    local_38[0] = 0x1040c;
  }
  else {
    uVar2 = FUN_007e30d0();
    puVar1 = PTR_DAT_043774f0;
    if ((uVar2 & 1) == 0) {
      local_38[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_043774f0 == 0) {
      uVar3 = FUN_007e336c();
      puVar4 = (uint *)FUN_0081a7a0(0x40,uVar3,8);
      if (puVar4 == (uint *)0x0) {
        local_38[0] = 0x10401;
        *(undefined8 *)PTR_DAT_043774f8 = 0;
      }
      else {
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined8 *)((long)puVar4 + 0x19) = 0;
        *(undefined8 *)((long)puVar4 + 0x21) = 0;
        *(undefined8 *)((long)puVar4 + 0x29) = 0;
        *(undefined8 *)((long)puVar4 + 0x31) = 0;
        *(undefined4 *)((long)puVar4 + 0x39) = 0;
        *(undefined2 *)((long)puVar4 + 0x3d) = 0;
        *(undefined1 *)((long)puVar4 + 0x3f) = 0;
        *(uint **)PTR_DAT_043774f8 = puVar4;
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        *(undefined1 *)(puVar4 + 6) = 1;
        FUN_007e60f4(puVar4 + 8,0x1c);
        *puVar4 = *puVar4 | 1;
        FUN_007ed25c(puVar4);
        *(uint **)puVar1 = puVar4;
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


