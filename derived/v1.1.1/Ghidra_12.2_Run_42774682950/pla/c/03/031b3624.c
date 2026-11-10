/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b3624; name: FUN_031b3624
 */


undefined8 * FUN_031b3624(long *param_1,int param_2)

{
  undefined8 *puVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = (ulong)((uint)(param_2 * -0x61c8864f) >> 0x18);
  sVar2 = *(short *)(param_1[2] + uVar5 * 2);
  lVar4 = *param_1;
  while( true ) {
    if (sVar2 < 0) {
      iVar3 = *(int *)((long)param_1 + 0x1c);
      *(int *)((long)param_1 + 0x1c) = iVar3 + 1;
      puVar1 = (undefined8 *)(lVar4 + (long)iVar3 * 0x10);
      *puVar1 = 0x7f7fffee7f7fffee;
      *(int *)(puVar1 + 1) = param_2;
      *(undefined4 *)((long)puVar1 + 0xc) = 0xffff;
      lVar4 = uVar5 * 2;
      *(undefined2 *)(param_1[1] + (long)(short)iVar3 * 2) = *(undefined2 *)(param_1[2] + lVar4);
      *(short *)(param_1[2] + lVar4) = (short)iVar3;
      return puVar1;
    }
    if (*(int *)(lVar4 + (long)sVar2 * 0x10 + 8) == param_2) break;
    sVar2 = *(short *)(param_1[1] + (long)sVar2 * 2);
  }
  return (undefined8 *)(lVar4 + (long)sVar2 * 0x10);
}


