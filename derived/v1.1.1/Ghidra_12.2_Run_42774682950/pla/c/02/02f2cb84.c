/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2cb84; name: FUN_02f2cb84
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2cb84(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    *(short *)(param_2 + 0x10) = (short)_DAT_042ab268;
    (**(code **)(**(long **)(param_1 + 0x128) + 0x80))(*(long **)(param_1 + 0x128),param_2);
    iVar2 = *(int *)(param_2 + 0x2c);
    if (iVar2 == 0x2e) {
      if ((*(byte *)(*(long *)(param_1 + 0x128) + 0x20) >> 1 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 0x160) = *(byte *)(param_1 + 0x160) | 1;
      lVar1 = 0;
      if (*(long *)(param_1 + 8) != 0) {
        lVar1 = *(long *)(param_1 + 8) + -0x18;
      }
      FUN_02edd7c4(DAT_0440a170,*(undefined4 *)(lVar1 + 0x210),
                   *(undefined4 *)(*(long *)(lVar1 + 0x180) + 0x10));
      iVar2 = *(int *)(param_2 + 0x2c);
    }
    if ((iVar2 == 0x11) && (*(long *)(param_1 + 0x130) != 0)) {
      iVar2 = FUN_02f2cd84(param_1,param_2);
      *(int *)(param_2 + 0x2c) = iVar2;
      if (iVar2 == 0x2b) {
        *(short *)(param_2 + 0x10) = (short)_DAT_042ab268;
        (**(code **)(**(long **)(param_1 + 0x128) + 0x80))(*(long **)(param_1 + 0x128),param_2);
        if ((*(int *)(param_2 + 0x2c) == 0x2e) &&
           ((*(byte *)(*(long *)(param_1 + 0x128) + 0x20) >> 1 & 1) == 0)) {
          *(byte *)(param_1 + 0x160) = *(byte *)(param_1 + 0x160) | 1;
          lVar1 = 0;
          if (*(long *)(param_1 + 8) != 0) {
            lVar1 = *(long *)(param_1 + 8) + -0x18;
          }
          FUN_02edd7c4(DAT_0440a170,*(undefined4 *)(lVar1 + 0x210),
                       *(undefined4 *)(*(long *)(lVar1 + 0x180) + 0x10));
          return;
        }
      }
    }
  }
  else {
    FUN_02f2e160(*(long *)(param_1 + 0x138),param_2);
    iVar2 = *(int *)(param_2 + 0x2c);
    while (iVar2 == 0x2b) {
      *(short *)(param_2 + 0x10) = (short)_DAT_042ab268;
      (**(code **)(**(long **)(param_1 + 0x128) + 0x80))(*(long **)(param_1 + 0x128),param_2);
      iVar2 = *(int *)(param_2 + 0x2c);
      if (iVar2 == 0x2e) {
        if ((*(byte *)(*(long *)(param_1 + 0x128) + 0x20) >> 1 & 1) != 0) {
          return;
        }
        *(byte *)(param_1 + 0x160) = *(byte *)(param_1 + 0x160) | 1;
        lVar1 = 0;
        if (*(long *)(param_1 + 8) != 0) {
          lVar1 = *(long *)(param_1 + 8) + -0x18;
        }
        FUN_02edd7c4(DAT_0440a170,*(undefined4 *)(lVar1 + 0x210),
                     *(undefined4 *)(*(long *)(lVar1 + 0x180) + 0x10));
        iVar2 = *(int *)(param_2 + 0x2c);
      }
      if ((iVar2 != 0x2d) && (iVar2 != 0x11)) {
        return;
      }
      FUN_02f2e36c(*(undefined8 *)(param_1 + 0x138),param_2);
      iVar2 = *(int *)(param_2 + 0x2c);
    }
  }
  return;
}


