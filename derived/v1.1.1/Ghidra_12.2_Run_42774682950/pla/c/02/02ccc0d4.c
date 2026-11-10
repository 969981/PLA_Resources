/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ccc0d4; name: FUN_02ccc0d4
 */


void FUN_02ccc0d4(long *param_1,undefined8 *param_2,long *param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = param_2[6];
  uVar5 = param_2[1];
  if ((param_4 - uVar3) + param_2[5] <= uVar5 - uVar3) {
    uVar2 = uVar3 << 3;
    if (4 < uVar3 >> 0x3d) {
      uVar2 = 0xffffffffffffffff;
    }
    if (uVar3 >> 0x3d == 0) {
      uVar2 = (uVar3 << 3) / 5;
    }
    uVar3 = param_2[5] + param_4;
    uVar1 = uVar5;
    if (uVar2 <= uVar5) {
      uVar1 = uVar2;
    }
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar3 <= uVar5) {
      lVar7 = *param_3;
      lVar6 = param_2[4];
      lVar4 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar3 << 3,8);
      if (lVar4 == 0) {
        (**(code **)(*(long *)*param_2 + 0xb8))();
      }
      FUN_02ccc1e4(param_2,lVar4,uVar3,lVar7,param_4,param_5);
      *param_1 = param_2[4] + (lVar7 - lVar6 >> 3) * 8;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


