/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee90c8; name: FUN_02ee90c8
 */


void FUN_02ee90c8(undefined8 *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = (ulong *)param_1[1];
  *param_1 = &PTR_FUN_042aac58;
  if (puVar2 == (ulong *)0x0) {
    return;
  }
  if (*puVar2 != 0) {
    if ((*puVar2 & 1) != 0) {
      FUN_02ee0bfc(DAT_0440a160,param_1,0);
      *(ulong *)param_1[1] = *(ulong *)param_1[1] & 0xfffffffffffffffe;
      puVar2 = (ulong *)param_1[1];
    }
    if (*puVar2 != 0) {
      if (((uint)*puVar2 >> 1 & 1) != 0) {
        FUN_02ee0bfc(DAT_0440a160,param_1,1);
        *(ulong *)param_1[1] = *(ulong *)param_1[1] & 0xfffffffffffffffd;
        puVar2 = (ulong *)param_1[1];
      }
      if (*puVar2 != 0) {
        if (((uint)*puVar2 >> 2 & 1) != 0) {
          FUN_02ee0bfc(DAT_0440a160,param_1,2);
          *(ulong *)param_1[1] = *(ulong *)param_1[1] & 0xfffffffffffffffb;
          puVar2 = (ulong *)param_1[1];
        }
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          uVar3 = 3;
          do {
            uVar4 = 1L << (uVar3 & 0x3f);
            if ((uVar4 & uVar1) != 0) {
              FUN_02ee0bfc(DAT_0440a160,param_1,uVar3);
              *(ulong *)param_1[1] = *(ulong *)param_1[1] & (uVar4 ^ 0xffffffffffffffff);
              puVar2 = (ulong *)param_1[1];
            }
            uVar1 = *puVar2;
            uVar3 = (ulong)((int)uVar3 + 1);
          } while (uVar1 != 0);
        }
      }
    }
    if (puVar2 == (ulong *)0x0) goto LAB_02ee91dc;
  }
  if (puVar2[2] != 0) {
    *(undefined4 *)(puVar2 + 3) = 0;
    (*DAT_0442d150)(0);
    puVar2[2] = 0;
    *(undefined4 *)((long)puVar2 + 0x1c) = 0;
  }
  (*DAT_0442d150)(2,puVar2);
LAB_02ee91dc:
  param_1[1] = 0;
  return;
}


