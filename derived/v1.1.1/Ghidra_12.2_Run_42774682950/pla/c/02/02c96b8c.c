/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c96b8c; name: FUN_02c96b8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c96b8c(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)param_3 - (float)param_2;
  fVar3 = (float)param_4 - (float)param_5;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(ulong *)(param_1 + 0x4f0) = (ulong)(uint)(2.0 / fVar2);
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(ulong *)(param_1 + 0x500) = (ulong)(uint)(2.0 / fVar3) << 0x20;
  uVar1 = _DAT_038890c0;
  *(undefined8 *)(param_1 + 0x518) = _UNK_038890c8;
  *(undefined8 *)(param_1 + 0x510) = uVar1;
  *(undefined8 *)(param_1 + 0x528) = 0x3f8000003f80000e;
  *(ulong *)(param_1 + 0x520) =
       CONCAT44(-((float)param_4 + (float)param_5) / fVar3,
                -((float)param_2 + (float)param_3) / fVar2);
  return;
}


