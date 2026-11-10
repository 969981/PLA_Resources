/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00324ab8; name: FUN_00324ab8
 */


byte * FUN_00324ab8(long *param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_38;
  byte *local_30;
  undefined8 uStack_28;
  
  local_30 = param_2 + 1;
  if ((char)*param_2 < '\0') {
    if ((char)*local_30 < '\0') {
      if ((char)param_2[2] < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (0x7fffffef <
              (uint)*param_2 + (uint)*local_30 * 0x80 + (uint)param_2[2] * 0x4000 +
              (uint)param_2[3] * 0x200000 + (uint)param_2[4] * 0x10000000 + 0xefdfbf80)) {
            return (byte *)0x0;
          }
          local_30 = param_2 + 5;
          goto LAB_00324afc;
        }
        lVar4 = 3;
      }
      else {
        lVar4 = 2;
      }
    }
    else {
      lVar4 = 1;
    }
    local_30 = param_2 + lVar4 + 1;
  }
LAB_00324afc:
  uStack_28 = param_3;
  iVar2 = FUN_0031e1b4(param_1,local_30);
  if (-1 < iVar2) {
    uVar3 = FUN_0030c7bc(param_1,&local_30,0xffffffff);
    while ((uVar3 & 1) == 0) {
      local_30 = (byte *)FUN_00323ec0(local_30,&local_38);
      if (local_30 == (byte *)0x0) {
        return (byte *)0x0;
      }
      FUN_00324c2c(&uStack_28,local_38);
      uVar3 = FUN_0030c7bc(param_1,&local_30,0xffffffff);
    }
    if ((int)param_1[10] == 0) {
      uVar1 = *(int *)((long)param_1 + 0x1c) + iVar2;
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      *param_1 = param_1[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
      return local_30;
    }
  }
  return (byte *)0x0;
}


