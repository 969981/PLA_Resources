/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef41c0; name: FUN_02ef41c0
 */


void FUN_02ef41c0(undefined8 *param_1)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  
  pbVar1 = (byte *)param_1[3];
  *param_1 = &PTR_FUN_042ab250;
  if (pbVar1 != (byte *)0x0) {
    uVar3 = (ulong)*pbVar1;
    if (uVar3 != 0) {
      pbVar1 = pbVar1 + ((ulong)(*pbVar1 + 4) & 0x1fc) + 8;
      lVar2 = *(long *)pbVar1;
      while( true ) {
        if (lVar2 != 0) {
          FUN_02f0efb8(DAT_0440a150,lVar2,param_1);
        }
        pbVar1 = pbVar1 + 0x10;
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) break;
        lVar2 = *(long *)pbVar1;
      }
      if (param_1[3] == 0) goto LAB_02ef4240;
    }
    FUN_02f59e60(0);
  }
LAB_02ef4240:
  param_1[3] = 0;
  return;
}


