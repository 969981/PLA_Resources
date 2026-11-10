/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e059f0; name: FUN_02e059f0
 */


uint * FUN_02e059f0(uint param_1,uint param_2,uint *param_3,ulong *param_4)

{
  ulong uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = (-(ulong)(param_1 - 1 >> 0x1f) & 0xfffffff800000000 | (ulong)(param_1 - 1) << 3) + 0x6f &
          0xfffffffffffffff0;
  if ((param_3 == (uint *)0x0) || (*param_4 < uVar1)) {
    param_3 = (uint *)0x0;
    *param_4 = uVar1;
  }
  else {
    *param_4 = uVar1;
    puVar2 = param_3 + 0x18;
    *param_3 = param_1;
    param_3[1] = param_2;
    *(uint **)(param_3 + 0x12) = puVar2;
    if (param_2 == 0) {
      if (0 < (int)param_1) {
        lVar3 = 0;
        lVar4 = 0;
        while( true ) {
          dVar6 = (double)(int)lVar4 * -6.283185307179586 * (1.0 / (double)(int)param_1);
          dVar5 = cos(dVar6);
          *(float *)((long)puVar2 + lVar3) = (float)dVar5;
          dVar5 = sin(dVar6);
          *(float *)(*(long *)(param_3 + 0x12) + lVar3 + 4) = (float)dVar5;
          if ((ulong)param_1 - 1 == lVar4) break;
          puVar2 = *(uint **)(param_3 + 0x12);
          lVar4 = lVar4 + 1;
          lVar3 = lVar3 + 8;
        }
      }
    }
    else if (0 < (int)param_1) {
      lVar3 = 0;
      lVar4 = 0;
      while( true ) {
        dVar6 = (double)(int)lVar4 * 6.283185307179586 * (1.0 / (double)(int)param_1);
        dVar5 = cos(dVar6);
        *(float *)((long)puVar2 + lVar3) = (float)dVar5;
        dVar5 = sin(dVar6);
        *(float *)(*(long *)(param_3 + 0x12) + lVar3 + 4) = (float)dVar5;
        if ((ulong)param_1 - 1 == lVar4) break;
        puVar2 = *(uint **)(param_3 + 0x12);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      }
    }
    FUN_02e05b90((ulong)param_1,param_3 + 2);
  }
  return param_3;
}


