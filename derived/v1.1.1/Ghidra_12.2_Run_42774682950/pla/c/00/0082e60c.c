/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082e60c; name: FUN_0082e60c
 */


void FUN_0082e60c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  long lVar5;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  uVar2 = FUN_00840df0();
  if ((uVar2 & 1) == 0) {
    local_40[0] = 0x1040c;
  }
  else {
    uVar2 = FUN_00840e00();
    puVar1 = PTR_DAT_04377ce8;
    if ((uVar2 & 1) == 0) {
      local_40[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_04377ce8 == 0) {
      uVar3 = FUN_007e336c();
      puVar4 = (undefined2 *)FUN_0081a7a0(0x98,uVar3,8);
      if (puVar4 == (undefined2 *)0x0) {
        local_40[0] = 0x10401;
        *(undefined8 *)PTR_DAT_04377e00 = 0;
      }
      else {
        lVar5 = 0;
        do {
          *(undefined4 *)((long)puVar4 + lVar5) = 0;
          lVar5 = lVar5 + 4;
        } while (lVar5 != 0x98);
        *(undefined2 **)PTR_DAT_04377e00 = puVar4;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        *(undefined1 *)(puVar4 + 4) = 0xfd;
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined8 *)(puVar4 + 0xc) = 0;
        puVar4[3] = 0xfdff;
        puVar4[0x28] = 0xfdfd;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 0x14) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined8 *)(puVar4 + 0x1c) = 0;
        *(undefined8 *)(puVar4 + 0x20) = 0;
        *(undefined8 *)(puVar4 + 0x24) = 0;
        FUN_007f0ce0(puVar4 + 0x2c);
        puVar4[0x3c] = 0xfdfd;
        *(undefined8 *)(puVar4 + 0x44) = 0;
        memset(puVar4 + 0x48,0,4);
        memset(puVar4 + 0x4a,0,4);
        *(undefined2 **)puVar1 = puVar4;
        local_40[0] = 0;
      }
    }
    else {
      local_40[0] = 0x1040f;
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


