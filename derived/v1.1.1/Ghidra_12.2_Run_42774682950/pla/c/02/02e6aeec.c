/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6aeec; name: FUN_02e6aeec
 */


undefined8
FUN_02e6aeec(long param_1,long param_2,ulong *param_3,undefined4 param_4,float *param_5,
            uint *param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  float fVar9;
  
  *(long *)(param_1 + 0x50) = param_2;
  if ((long)*param_3 < 0) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    *(undefined1 *)(param_1 + 0x6c) = 0;
    return 0x1f;
  }
  *(undefined4 *)(param_1 + 0x80) = param_4;
  uVar5 = (**(code **)(**(long **)(param_2 + 0x610) + 0x18))(*(long **)(param_2 + 0x610),param_3);
  uVar2 = (uint)uVar5;
  if (uVar2 - 1 < param_7) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_7 / uVar2;
    }
    if (param_7 == uVar3 * uVar2) {
      *(uint *)(param_1 + 0x60) = uVar2;
      *(uint *)(param_1 + 0xa0) = uVar2;
      fVar9 = *param_5;
      if (fVar9 <= 1.0) {
        fVar9 = 1.0;
      }
      *(float *)(param_1 + 0x84) = fVar9;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = (uint)param_5[1] / uVar2;
      }
      *(uint *)(param_1 + 0x8c) = uVar3 * uVar2;
      uVar8 = *param_3;
      if ((long)(ulong)(uint)param_5[2] <= (long)*param_3) {
        uVar8 = (ulong)(uint)param_5[2];
      }
      *(int *)(param_1 + 0x90) = (int)uVar8;
      cVar6 = *(char *)(param_5 + 3);
      if (cVar6 == '\0') {
        cVar6 = '\x01';
      }
      *(char *)(param_1 + 0xc1) = cVar6;
      *(undefined1 *)(param_1 + 100) = *(undefined1 *)((long)param_5 + 0xd);
      *(undefined8 *)(param_1 + 0x78) = 0;
      if (*param_3 == 0) {
        *(undefined1 *)(param_1 + 0x67) = 1;
        *(undefined1 *)(param_1 + 0x6c) = 0;
      }
      if (param_6 == (uint *)0x0) {
        *(uint *)(param_1 + 0x94) = param_7;
        *(uint *)(param_1 + 0x9c) = uVar2;
        return 1;
      }
      uVar3 = param_6[2];
      if (uVar3 == 0) {
        iVar7 = 0;
      }
      else {
        uVar4 = FUN_02e6b0c0(uVar5,uVar3);
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = uVar3 / uVar4;
        }
        uVar1 = uVar1 * uVar2;
        uVar5 = (ulong)uVar1;
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = param_7 / uVar1;
        }
        *(uint *)(param_1 + 0xa0) = uVar1;
        iVar7 = param_7 - uVar2 * uVar1;
      }
      *(uint *)(param_1 + 0x94) = param_7 - iVar7;
      uVar3 = (uint)uVar5;
      *(uint *)(param_1 + 0x9c) = uVar3;
      uVar2 = *param_6;
      if (uVar2 == 0) {
        if (uVar3 < param_6[1]) {
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = ((uVar3 + param_6[1]) - 1) / uVar3;
          }
          *(uint *)(param_1 + 0x9c) = uVar2 * uVar3;
          if (param_7 - iVar7 < uVar2 * uVar3) goto LAB_02e6b024;
        }
        return 1;
      }
      if (uVar2 <= param_7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar2 / uVar3;
        }
        if (uVar2 == uVar1 * uVar3) {
          *(uint *)(param_1 + 0x94) = uVar2;
          *(uint *)(param_1 + 0x9c) = *param_6;
          return 1;
        }
      }
    }
  }
LAB_02e6b024:
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return 2;
}


