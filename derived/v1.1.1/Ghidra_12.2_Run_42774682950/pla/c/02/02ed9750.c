/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed9750; name: FUN_02ed9750
 */


undefined8 FUN_02ed9750(long param_1,undefined4 *param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *__dest;
  long *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  void *__src;
  void *pvVar7;
  uint uVar8;
  float fVar9;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  uVar6 = *(ushort *)(param_1 + 0xaa) & 0x3ff;
  if (((*(undefined8 **)(param_1 + 0x38) == (undefined8 *)0x0) ||
      ((*(ushort *)(param_1 + 0xaa) & 0x3ff) == 0)) ||
     (((uint)**(undefined8 **)(param_1 + 0x38) >> 0x10 & 1) == 0)) {
    lVar4 = *(long *)(param_1 + 0x78);
  }
  else {
    local_78 = 0xff;
    local_70 = 0xff;
    local_80 = 0;
    fVar9 = 0.0;
    local_88 = 0;
    local_68 = 0;
    local_90 = 0;
    uVar6 = *(uint *)(DAT_0440a160 + 0x20);
    if (uVar6 != 0) {
      uVar8 = (int)(param_1 + 0x30) + 0x10;
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = uVar8 / uVar6;
      }
      for (plVar3 = *(long **)(*(long *)(DAT_0440a160 + 0x18) + (ulong)(uVar8 - uVar5 * uVar6) * 8);
          plVar3 != (long *)0x0; plVar3 = (long *)plVar3[2]) {
        if ((*plVar3 == param_1 + 0x30) && ((int)plVar3[1] == 0x10)) {
          if (*(int *)((long)plVar3 + 0x4c) == 3) {
            fVar9 = (float)FUN_02eb1180(DAT_0440a160,plVar3,&local_90);
          }
          else {
            fVar9 = (float)FUN_02eb1334();
          }
          break;
        }
      }
    }
    uVar6 = (uint)fVar9;
    lVar4 = *(long *)(param_1 + 0x78);
  }
  if (lVar4 == 0) {
    FUN_02ed55c0(param_1);
  }
  if (uVar6 == 0) {
    return 1;
  }
  pvVar7 = *(void **)(param_2 + 4);
  if ((pvVar7 == (void *)0x0) || (lVar4 = *(long *)(param_1 + 0x78), lVar4 == 0)) goto LAB_02ed98e4;
  uVar5 = *(uint *)((long)pvVar7 + 0x10);
  uVar8 = *(uint *)((long)pvVar7 + 0x14);
  if (uVar8 <= uVar5) {
    iVar1 = uVar8 + (uVar8 >> 1);
    __src = *(void **)((long)pvVar7 + 8);
    if (uVar8 == 0) {
      iVar1 = 1;
    }
    uVar8 = iVar1 + uVar8;
    if (uVar8 < 2) {
      __dest = pvVar7;
      if (__src == (void *)0x0) goto LAB_02ed98b0;
LAB_02ed98a4:
      if ((__dest == __src) || (__dest == (void *)0x0)) goto LAB_02ed98b0;
      memcpy(__dest,__src,((ulong)uVar5 & 0x1fffffff) << 3);
      if (pvVar7 != __src) {
        (*DAT_0442d158)(0,__src);
      }
    }
    else {
      __dest = (void *)(*DAT_0442d140)(0,(ulong)uVar8 << 3,4);
      if (__src != (void *)0x0) goto LAB_02ed98a4;
LAB_02ed98b0:
      if (__dest == (void *)0x0) goto LAB_02ed98e4;
    }
    *(void **)((long)pvVar7 + 8) = __dest;
    *(uint *)((long)pvVar7 + 0x14) = uVar8;
  }
  if (uVar5 < uVar8) {
    plVar3 = (long *)(*(long *)((long)pvVar7 + 8) + (ulong)*(uint *)((long)pvVar7 + 0x10) * 8);
    *(uint *)((long)pvVar7 + 0x10) = *(uint *)((long)pvVar7 + 0x10) + 1;
    if (plVar3 != (long *)0x0) {
      *plVar3 = lVar4 + 0x60;
    }
  }
LAB_02ed98e4:
  if ((((param_3 & 1) != 0) && (*(char *)((long)param_2 + 0x1d) != '\0')) &&
     (*(short *)((long)param_2 + 0x1a) == 0)) {
    lVar4 = *(long *)(param_1 + 0x78);
    if (lVar4 == 0) {
      uVar8 = 0;
      uVar5 = 0;
    }
    else {
      uVar8 = (uint)*(ushort *)(lVar4 + 0x88);
      uVar5 = (uint)*(ushort *)(lVar4 + 0x8a);
    }
    if ((int)uVar6 <= (int)(uVar8 - uVar5)) {
      local_90 = 0;
      uVar2 = FUN_02f105dc(*param_2,lVar4 + 0x60,uVar6,0,*(uint *)(param_1 + 0xaa) >> 10 & 1,
                           *(uint *)(param_1 + 0xaa) >> 0xb & 1,&local_90,1);
      *(short *)((long)param_2 + 0x1a) = *(short *)((long)param_2 + 0x1a) + 1;
      return uVar2;
    }
  }
  return 1;
}


