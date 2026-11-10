/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c1c78; name: FUN_010c1c78
 */


int FUN_010c1c78(undefined8 param_1,short *param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  float fVar7;
  
  fVar4 = (float)FUN_0021bcb0(*param_3);
  if (*param_2 == 0x10) {
    if ((ulong)(ushort)param_2[1] < 2) {
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      uVar1 = NEON_ucvtf((uint)(ushort)param_2[3]);
      uVar5 = (undefined2)uVar1;
      uVar6 = (undefined2)((uint)uVar1 >> 0x10);
    }
    param_2 = param_2 + (ulong)(ushort)param_2[1] + 2;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
  }
  uVar3 = *(undefined8 *)(*param_3 + 0x28);
  fVar7 = (float)((uint)(int)(fVar4 * (float)CONCAT22(uVar6,uVar5)) >> 8);
  FUN_0021bcb0();
  fVar4 = (float)FUN_010c0da8(param_1,param_2,uVar3);
  if (fVar4 <= fVar7) {
    iVar2 = 1000;
  }
  else {
    iVar2 = (int)((fVar7 / fVar4) * 1000.0);
  }
  return iVar2;
}


