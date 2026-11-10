/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010e3c0; name: FUN_0010e3c0
 */


void FUN_0010e3c0(long param_1,ulong param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((long)param_2 < 0x10) {
    uVar5 = 0;
    if ((long)param_2 < 1) {
      return;
    }
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    uVar2 = 0;
    do {
      uVar8 = ((undefined8 *)(param_4 + uVar2))[1];
      uVar7 = *(undefined8 *)(param_4 + uVar2);
      uVar5 = uVar2 + 0x10;
      lVar3 = uVar2 + 0x20;
      puVar1[1] = CONCAT44((int)((ulong)puVar1[1] >> 0x20) * param_3 +
                           (int)(short)-(ushort)(byte)((ulong)uVar8 >> 0x18),
                           (int)puVar1[1] * param_3 +
                           (int)(short)-(ushort)(byte)((ulong)uVar8 >> 0x10));
      *puVar1 = CONCAT44((int)((ulong)*puVar1 >> 0x20) * param_3 +
                         (int)(short)-(ushort)(byte)((ulong)uVar8 >> 8),
                         (int)*puVar1 * param_3 + (int)(short)-(ushort)(byte)uVar8);
      puVar1[3] = CONCAT44((int)((ulong)puVar1[3] >> 0x20) * param_3 +
                           (int)(short)-(ushort)(byte)((ulong)uVar8 >> 0x38),
                           (int)puVar1[3] * param_3 +
                           (int)(short)-(ushort)(byte)((ulong)uVar8 >> 0x30));
      puVar1[2] = CONCAT44((int)((ulong)puVar1[2] >> 0x20) * param_3 +
                           (int)(short)-(ushort)(byte)((ulong)uVar8 >> 0x28),
                           (int)puVar1[2] * param_3 +
                           (int)(short)-(ushort)(byte)((ulong)uVar8 >> 0x20));
      puVar1[-3] = CONCAT44((int)((ulong)puVar1[-3] >> 0x20) * param_3 +
                            (int)(short)-(ushort)(byte)((ulong)uVar7 >> 0x18),
                            (int)puVar1[-3] * param_3 +
                            (int)(short)-(ushort)(byte)((ulong)uVar7 >> 0x10));
      puVar1[-4] = CONCAT44((int)((ulong)puVar1[-4] >> 0x20) * param_3 +
                            (int)(short)-(ushort)(byte)((ulong)uVar7 >> 8),
                            (int)puVar1[-4] * param_3 + (int)(short)-(ushort)(byte)uVar7);
      puVar1[-1] = CONCAT44((int)((ulong)puVar1[-1] >> 0x20) * param_3 +
                            (int)(short)-(ushort)(byte)((ulong)uVar7 >> 0x38),
                            (int)puVar1[-1] * param_3 +
                            (int)(short)-(ushort)(byte)((ulong)uVar7 >> 0x30));
      puVar1[-2] = CONCAT44((int)((ulong)puVar1[-2] >> 0x20) * param_3 +
                            (int)(short)-(ushort)(byte)((ulong)uVar7 >> 0x28),
                            (int)puVar1[-2] * param_3 +
                            (int)(short)-(ushort)(byte)((ulong)uVar7 >> 0x20));
      puVar1 = puVar1 + 8;
      uVar2 = uVar5;
    } while (lVar3 <= (long)param_2);
    if ((long)param_2 <= (long)uVar5) {
      return;
    }
  }
  uVar2 = ~uVar5;
  if ((param_2 & 1) != 0) {
    lVar3 = uVar5 * 4;
    pbVar4 = (byte *)(param_4 + uVar5);
    uVar5 = uVar5 | 1;
    *(uint *)(param_1 + lVar3) = *(int *)(param_1 + lVar3) * param_3 - (uint)*pbVar4;
  }
  if (uVar2 + param_2 != 0) {
    lVar3 = param_2 - uVar5;
    pbVar4 = (byte *)(param_4 + uVar5 + 1);
    piVar6 = (int *)(param_1 + (uVar5 + 1) * 4);
    do {
      piVar6[-1] = piVar6[-1] * param_3 - (uint)pbVar4[-1];
      lVar3 = lVar3 + -2;
      *piVar6 = *piVar6 * param_3 - (uint)*pbVar4;
      pbVar4 = pbVar4 + 2;
      piVar6 = piVar6 + 2;
    } while (lVar3 != 0);
  }
  return;
}


