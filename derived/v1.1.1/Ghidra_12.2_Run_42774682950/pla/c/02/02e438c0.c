/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e438c0; name: FUN_02e438c0
 */


void FUN_02e438c0(long *param_1)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    (*DAT_0442d150)(10);
  }
  if (param_1[2] != 0) {
    (*DAT_0442d150)(10);
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    uVar2 = *(ushort *)(param_1 + 5);
    if (uVar2 != 0) {
      uVar3 = 1;
      lVar4 = 8;
      lVar1 = *(long *)(lVar1 + 8);
      while( true ) {
        if (lVar1 != 0) {
          (*DAT_0442d150)(10);
          uVar2 = *(ushort *)(param_1 + 5);
        }
        if (uVar2 <= uVar3) break;
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x10;
        lVar1 = *(long *)(param_1[4] + lVar4);
      }
      lVar1 = param_1[4];
    }
    (*DAT_0442d150)(10,lVar1);
  }
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[4] = 0;
  return;
}


