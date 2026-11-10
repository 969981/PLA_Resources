/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed6164; name: FUN_02ed6164
 */


undefined8 FUN_02ed6164(long *param_1,uint param_2,int param_3,byte param_4,int param_5)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  if (param_2 < 4) {
    piVar2 = (int *)param_1[0xd];
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)(*DAT_0442d138)(2,0x28);
      if (piVar2 == (int *)0x0) {
        param_1[0xd] = 0;
        return 0x34;
      }
      *(undefined2 *)(piVar2 + 4) = 0;
      piVar2[3] = 0;
      *(undefined2 *)(piVar2 + 6) = 0;
      piVar2[5] = 0;
      *(undefined2 *)(piVar2 + 8) = 0;
      piVar2[7] = 0;
      *(undefined1 *)(piVar2 + 9) = 0;
      piVar2[0] = 0;
      piVar2[1] = 0;
      *(undefined2 *)(piVar2 + 2) = 0;
      param_1[0xd] = (long)piVar2;
    }
    if (*piVar2 <= param_5) {
      *piVar2 = param_5;
      lVar1 = param_1[0xd] + (ulong)param_2 * 8;
      pbVar4 = (byte *)(lVar1 + 9);
      piVar2 = (int *)(lVar1 + 4);
      if ((*pbVar4 != (param_4 & 1)) || (*piVar2 != param_3)) {
        *pbVar4 = param_4 & 1;
        *piVar2 = param_3;
        (**(code **)(*param_1 + 0x188))(param_1,0,0);
        (**(code **)(*param_1 + 0x118))(param_1,param_2);
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0x1f;
  }
  return uVar3;
}


