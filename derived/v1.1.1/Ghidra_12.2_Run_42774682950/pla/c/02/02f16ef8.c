/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f16ef8; name: FUN_02f16ef8
 */


void FUN_02f16ef8(void)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  size_t __n;
  long *plVar9;
  
  lVar8 = DAT_0440a7e0;
  do {
    if (lVar8 == 0) {
LAB_02f16f38:
      lVar8 = DAT_0440a178;
      bVar1 = DAT_042aa0f0;
      bVar2 = DAT_0440a7c8 == '\0';
      if (*(int *)(DAT_0440a178 + 8) != 0) {
        uVar5 = nn::os::GetSystemTick();
        *(undefined8 *)(lVar8 + 0x40) = uVar5;
      }
      FUN_02eb2fac(DAT_042ab268);
      FUN_02f15a38();
      lVar8 = DAT_0440ad48;
      if ((DAT_0440adf8 == '\0') || (DAT_0440adfc != '\0')) {
        for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x1c8)) {
          *(ushort *)(lVar8 + 0x198) = *(ushort *)(lVar8 + 0x198) & 0xfeff;
        }
      }
      else {
        for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x1c8)) {
          FUN_02ecbed8(lVar8);
          *(ushort *)(lVar8 + 0x198) = *(ushort *)(lVar8 + 0x198) & 0xfeff;
        }
        DAT_0440adf8 = '\0';
      }
      plVar9 = DAT_0440adb8;
      bVar1 = bVar2 | bVar1 & 1;
      if (DAT_0440adc0 != 0) {
        if (*DAT_0440adb8 != 0) {
          FUN_02ed3f34();
        }
        uVar3 = (ulong)DAT_0440adc0;
        if (plVar9 + 1 != DAT_0440adb8 + uVar3) {
          if (plVar9[1] != 0) {
            FUN_02ed3f34();
            uVar3 = (ulong)DAT_0440adc0;
          }
          if (plVar9 + 2 != DAT_0440adb8 + uVar3) {
            if (plVar9[2] != 0) {
              FUN_02ed3f34();
              uVar3 = (ulong)DAT_0440adc0;
            }
            plVar7 = DAT_0440adb8;
            for (plVar9 = plVar9 + 3; plVar9 != plVar7 + uVar3; plVar9 = plVar9 + 1) {
              if (*plVar9 != 0) {
                FUN_02ed3f34();
                uVar3 = (ulong)DAT_0440adc0;
                plVar7 = DAT_0440adb8;
              }
            }
          }
        }
      }
      if (DAT_0440a1f0 == 0) {
        FUN_02f17560(bVar1);
        FUN_02f17678(bVar1);
        lVar8 = DAT_0440a7e0;
      }
      else {
        FUN_02f17188(bVar1);
        lVar8 = DAT_0440a7e0;
      }
      for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
        lVar4 = *(long *)(lVar8 + 0x148);
        if (lVar4 != 0) {
          puVar6 = *(undefined8 **)(lVar8 + 0x150);
          __n = (ulong)*(ushort *)(puVar6 + 2) * (ulong)*(byte *)(puVar6 + 1) * 2;
          if (*(short *)((long)puVar6 + 0x12) == 0) {
            memset((void *)*puVar6,0,__n);
            lVar4 = *(long *)(lVar8 + 0x148);
            puVar6 = *(undefined8 **)(lVar8 + 0x150);
          }
          FUN_02ea5e08(lVar4,*puVar6,__n);
          *(undefined2 *)(*(long *)(lVar8 + 0x150) + 0x12) = 0;
        }
        (**(code **)(**(long **)(lVar8 + 0x138) + 0x50))();
        *(undefined4 *)(lVar8 + 0x140) = *(undefined4 *)(lVar8 + 0x144);
      }
      DAT_042aa0e8._0_4_ = DAT_042aa0e8._4_4_;
      FUN_02f16a14();
      return;
    }
    uVar3 = (**(code **)(**(long **)(lVar8 + 0x138) + 0x58))();
    if ((uVar3 & 1) != 0) {
      (**(code **)(**(long **)(lVar8 + 0x138) + 0x60))();
      if ((DAT_0440a548 == 0) || (8 < (uint)(*(int *)(DAT_0440a128 + 0x78) - DAT_0440a548))) {
        DAT_0440a548 = *(int *)(DAT_0440a128 + 0x78);
        goto LAB_02f16f38;
      }
    }
    lVar8 = *(long *)(lVar8 + 8);
  } while( true );
}


