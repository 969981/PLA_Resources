/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00841dfc; name: FUN_00841dfc
 */


void FUN_00841dfc(undefined8 param_1,long param_2,ushort param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  void *__s;
  ulong uVar4;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  if (*(long *)(param_2 + 8) == 0) {
    if ((param_3 < 2) || (param_3 == 0xffff)) {
      local_58[0] = 0x10407;
    }
    else {
      uVar2 = FUN_007e336c();
      uVar4 = (ulong)param_3;
      lVar3 = FUN_0081a750(uVar4 * 0x5d0,uVar2);
      if (lVar3 != 0) {
        __s = (void *)(lVar3 + 0x2c);
        puVar1 = PTR_DAT_04377fb0 + 0x10;
        do {
          *(undefined **)((long)__s + -0x14) = puVar1;
          memset(__s,0,4);
          *(undefined8 *)((long)__s + -0xc) = 0;
          *(undefined1 *)((long)__s + -4) = 0;
          memset(__s,0,4);
          *(undefined2 *)((long)__s + -0x2c) = 0;
          *(undefined8 *)((long)__s + -0x24) = 0;
          *(undefined8 *)((long)__s + -0x1c) = 0;
          *(undefined8 *)((long)__s + -0xc) = 0;
          *(undefined1 *)((long)__s + -4) = 0;
          memset(__s,0,4);
          uVar4 = uVar4 - 1;
          __s = (void *)((long)__s + 0x5d0);
        } while (uVar4 != 0);
      }
      *(ushort *)(param_2 + 0x10) = param_3;
      *(long *)(param_2 + 8) = lVar3;
      local_58[0] = 0;
    }
  }
  else {
    local_58[0] = 0x10402;
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_007ee578(param_1,local_58);
  return;
}


