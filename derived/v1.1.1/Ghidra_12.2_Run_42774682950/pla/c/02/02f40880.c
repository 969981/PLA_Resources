/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f40880; name: FUN_02f40880
 */


void FUN_02f40880(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  byte *pbVar4;
  
  plVar3 = (long *)(param_1 + 0x18);
  if (*plVar3 != 0) {
    FUN_02f40a90();
    uVar2 = *(ulong *)(param_1 + 0x18);
    if ((uVar2 == 0) || (*(ulong *)(param_1 + 0x10) < uVar2)) {
      *(undefined4 *)(param_1 + 0x27) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0xffffffff;
    }
    else {
      pbVar4 = (byte *)(param_1 + 0x24);
      bVar1 = *pbVar4;
      if ((((bVar1 ^ 0xff) & 0xf0) != 0 & bVar1 >> 7) == 0) {
        bVar1 = 0;
      }
      *(byte *)(param_1 + 0x2a) = bVar1;
      if (uVar2 == *(ulong *)(param_1 + 0x10)) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x27) = 0;
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        pbVar4[2] = 0;
        pbVar4[3] = 0;
        *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      }
      else {
        FUN_02f40970(plVar3,(undefined4 *)(param_1 + 0x20));
        if ((*(int *)(param_1 + 0x20) != -1) &&
           (*(ulong *)(param_1 + 0x18) < *(ulong *)(param_1 + 0x10))) {
          FUN_02f40a30(param_1);
          return;
        }
        *plVar3 = 0;
        *(undefined4 *)(param_1 + 0x27) = 0;
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        pbVar4[2] = 0;
        pbVar4[3] = 0;
        *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      }
    }
  }
  return;
}


