/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028cc3dc; name: FUN_028cc3dc
 */


void FUN_028cc3dc(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *__src;
  long lVar8;
  undefined1 local_70 [16];
  ulong *local_60;
  uint local_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar8 = param_2[3];
  lVar4 = param_2[5];
  lVar3 = param_2[6];
  param_1[4] = param_2[4];
  param_1[5] = lVar4;
  param_1[6] = lVar3;
  param_1[2] = 0;
  param_1[3] = lVar8;
  uVar6 = param_2[1];
  if (uVar6 == 0) {
    return;
  }
  uVar5 = 0x7fffffffffffffff;
  if ((ulong)param_1[4] < 0x1ffffffffffffff) {
    uVar5 = param_1[4] << 6;
  }
  if (uVar5 < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = (uVar6 - 1 >> 6) + 1;
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar8 * 8,1);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))((long *)param_1[3]);
  }
  *param_1 = lVar4;
  param_1[1] = 0;
  param_1[2] = lVar8;
  puVar2 = (ulong *)*param_2;
  lVar8 = (long)puVar2 + ((ulong)param_2[1] >> 3 & 0x1ffffffffffffff8);
  uVar5 = param_2[1] & 0x3f;
  uVar7 = param_1[1];
  lVar4 = uVar5 + (lVar8 - (long)puVar2) * 8;
  uVar6 = uVar7 + lVar4;
  param_1[1] = uVar6;
  if ((uVar7 == 0) || (0x3f < (uVar6 - 1 ^ uVar7 - 1))) {
    uVar1 = 0;
    if (0x40 < uVar6) {
      uVar1 = uVar6 - 1 >> 6;
    }
    *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
  }
  local_58 = (uint)uVar7 & 0x3f;
  local_60 = (ulong *)(*param_1 + (uVar7 >> 3 & 0x1ffffffffffffff8));
  if ((uVar7 & 0x3f) == 0) {
    if (0 < lVar4) {
      __src = puVar2;
      if ((uVar7 & 0x3f) != 0) {
        __src = puVar2 + 1;
        lVar8 = lVar4;
        if (0x3f < lVar4) {
          lVar8 = 0x40;
        }
        lVar4 = lVar4 - lVar8;
        uVar6 = 0xffffffffffffffff >> (0x40U - lVar8 & 0x3f);
        *local_60 = *local_60 & (uVar6 ^ 0xffffffffffffffff) | *puVar2 & uVar6;
        lVar3 = lVar8 + 0x3f;
        if (-1 < lVar8) {
          lVar3 = lVar8;
        }
        local_60 = local_60 + (lVar3 >> 6);
      }
      lVar8 = lVar4 + 0x3f;
      if (-1 < lVar4) {
        lVar8 = lVar4;
      }
      lVar8 = lVar8 >> 6;
      memmove(local_60,__src,lVar8 * 8);
      if (0 < lVar4 % 0x40) {
        uVar6 = 0xffffffffffffffff >> (-(lVar4 % 0x40) & 0x3fU);
        local_60[lVar8] = local_60[lVar8] & (uVar6 ^ 0xffffffffffffffff) | __src[lVar8] & uVar6;
      }
    }
  }
  else {
    FUN_028cc690(local_70,puVar2,0,lVar8,uVar5,&local_60);
  }
  return;
}


