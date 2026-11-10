/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339e218; name: FUN_0339e218
 */


long FUN_0339e218(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uStack_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  long *local_1a0 [42];
  
  lVar11 = tpidr_el0;
  if (*(long *)(lVar11 + 0x38d490) == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar8;
    local_1b8 = *(long *)(lVar8 + 0x10);
    if (local_1b8 != 0) goto LAB_0339e268;
LAB_0339e27c:
    if (param_4 == (undefined8 *)0x0) goto LAB_0339e284;
LAB_0339e4c0:
    *param_4 = 0;
    puVar12 = param_4;
    lVar8 = local_1b8;
    if (*(long *)(param_1 + 8) == 0) goto LAB_0339e290;
LAB_0339e2cc:
    if (*(long *)(lVar11 + 0x38d490) == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar4;
      lVar4 = *(long *)(lVar4 + 0x10);
    }
    else {
      lVar4 = *(long *)(*(long *)(lVar11 + 0x38d490) + 0x10);
    }
    if (lVar4 != 0) {
      puVar1 = *(undefined8 **)(lVar4 + 8);
      uVar10 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= *(ulong *)(lVar4 + 0x10)) &&
         (*(ulong *)(lVar4 + 8) = uVar10, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = "StRead bundle data";
        uVar7 = nn::os::GetSystemTick();
        puVar1[1] = uVar7;
      }
    }
    lVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x28))
                      (*(long **)(param_1 + 8),param_2,param_3,puVar12);
    if (lVar4 == 0) {
      if ((1 < DAT_04450e08) || (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)) {
        uVar10 = FUN_03327170();
        if ((uVar10 & 1) == 0) {
          FUN_03326994(local_1a0,&DAT_04450db8,2);
          lVar11 = FUN_03326338(local_1a0,"Unable to load from buffer",PTR_DAT_04372528);
          uVar7 = 0x230;
LAB_0339e6e4:
          *(char **)(lVar11 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
          *(undefined8 *)(lVar11 + 0x40) = uVar7;
          goto LAB_0339e670;
        }
        FUN_03326a7c(local_1a0,&DAT_04450db8,2);
        lVar11 = FUN_03326338(local_1a0,"Unable to load from buffer",PTR_DAT_04372528);
        uVar7 = 0x230;
LAB_0339e8b8:
        *(char **)(lVar11 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
        *(undefined8 *)(lVar11 + 0x40) = uVar7;
LAB_0339e874:
        FUN_03326adc(local_1a0);
        lVar4 = 0;
        goto joined_r0x0339e36c;
      }
    }
    else {
      if (*(char *)(param_1 + 0x28) == '\0') goto joined_r0x0339e36c;
      if (*(long *)(lVar11 + 0x38d490) == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar11 + 0x38d490) = lVar9;
        lVar11 = *(long *)(lVar9 + 0x10);
        if (lVar11 != 0) goto LAB_0339e34c;
LAB_0339e360:
        plVar6 = *(long **)(param_1 + 0x10);
      }
      else {
        lVar11 = *(long *)(*(long *)(lVar11 + 0x38d490) + 0x10);
        if (lVar11 == 0) goto LAB_0339e360;
LAB_0339e34c:
        puVar12 = *(undefined8 **)(lVar11 + 8);
        uVar10 = (long)puVar12 + 0x17U & 0xfffffffffffffff8;
        if ((*(ulong *)(lVar11 + 0x10) < uVar10) ||
           (*(ulong *)(lVar11 + 8) = uVar10, puVar12 == (undefined8 *)0x0)) goto LAB_0339e360;
        *puVar12 = "StVersioning";
        uVar7 = nn::os::GetSystemTick();
        puVar12[1] = uVar7;
        plVar6 = *(long **)(param_1 + 0x10);
      }
      if (plVar6 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        goto joined_r0x0339e36c;
      }
      lVar4 = (**(code **)(*plVar6 + 0x28))(plVar6,lVar4,0,0);
      if (lVar4 != 0) goto joined_r0x0339e36c;
      if ((1 < DAT_04450e08) || (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)) {
        uVar10 = FUN_03327170();
        if ((uVar10 & 1) != 0) {
          FUN_03326a7c(local_1a0,&DAT_04450db8,2);
          lVar11 = FUN_03326338(local_1a0,"Versioning failed",PTR_DAT_04372528);
          uVar7 = 0x255;
          goto LAB_0339e8b8;
        }
        FUN_03326994(local_1a0,&DAT_04450db8,2);
        lVar11 = FUN_03326338(local_1a0,"Versioning failed",PTR_DAT_04372528);
        uVar7 = 0x255;
        goto LAB_0339e6e4;
      }
    }
  }
  else {
    local_1b8 = *(long *)(*(long *)(lVar11 + 0x38d490) + 0x10);
    if (local_1b8 == 0) goto LAB_0339e27c;
LAB_0339e268:
    puVar12 = *(undefined8 **)(local_1b8 + 8);
    uVar10 = (long)puVar12 + 0x1fU & 0xfffffffffffffff8;
    if ((*(ulong *)(local_1b8 + 0x10) < uVar10) ||
       (*(ulong *)(local_1b8 + 8) = uVar10, puVar12 == (undefined8 *)0x0)) goto LAB_0339e27c;
    *puVar12 = "LtToBundle (memory view)";
    puVar12[2] = "StGet read format";
    uVar7 = nn::os::GetSystemTick();
    puVar12[1] = uVar7;
    if (param_4 != (undefined8 *)0x0) goto LAB_0339e4c0;
LAB_0339e284:
    param_4 = &uStack_1c0;
    puVar12 = &uStack_1c0;
    lVar8 = local_1b8;
    if (*(long *)(param_1 + 8) != 0) goto LAB_0339e2cc;
LAB_0339e290:
    lVar8 = local_1b8;
    if (param_3 != 0) {
      lVar4 = FUN_033789e0(param_2,param_3);
      if (lVar4 == 0) {
        if ((DAT_04450e08 < 2) && (uVar10 = FUN_03327170(), (uVar10 & 1) == 0)) goto LAB_0339e678;
        uVar10 = FUN_03327170();
        if ((uVar10 & 1) == 0) {
          FUN_03326994(local_1a0,&DAT_04450db8,2);
          lVar11 = FUN_03326338(local_1a0,"The format was not recognized",PTR_DAT_04372528);
          uVar7 = 0x1d8;
LAB_0339e668:
          *(char **)(lVar11 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
          *(undefined8 *)(lVar11 + 0x40) = uVar7;
          *(undefined4 *)(lVar11 + 0x1c) = 0xc8920001;
          goto LAB_0339e670;
        }
        FUN_03326a7c(local_1a0,&DAT_04450db8,2);
        lVar11 = FUN_03326338(local_1a0,"The format was not recognized",PTR_DAT_04372528);
        uVar7 = 0x1d8;
      }
      else {
        if (*(code **)(lVar4 + 0x10) == (code *)0x0) {
          plVar6 = (long *)0x0;
        }
        else {
          (**(code **)(lVar4 + 0x10))(local_1a0);
          plVar6 = local_1a0[0];
        }
        local_1a0[0] = (long *)0x0;
        plVar5 = *(long **)(param_1 + 8);
        *(long **)(param_1 + 8) = plVar6;
        if (plVar5 != (long *)0x0) {
          if (plVar5[1] != 0) {
            plVar6 = plVar5 + 2;
            do {
              lVar9 = *plVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (((lVar9 + -1 == 0) && ((**(code **)(*plVar5 + 0x18))(), local_1a0[0] != (long *)0x0)
                ) && (local_1a0[0][1] != 0)) {
              plVar6 = local_1a0[0] + 2;
              do {
                lVar9 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar9 + -1 == 0) {
                (**(code **)(*local_1a0[0] + 0x18))();
                plVar6 = *(long **)(param_1 + 8);
                goto joined_r0x0339e488;
              }
            }
          }
          plVar6 = *(long **)(param_1 + 8);
        }
joined_r0x0339e488:
        puVar12 = param_4;
        if (plVar6 != (long *)0x0) goto LAB_0339e2cc;
        if ((DAT_04450e08 < 2) && (uVar10 = FUN_03327170(), (uVar10 & 1) == 0)) goto LAB_0339e678;
        uVar10 = FUN_03327170();
        if ((uVar10 & 1) == 0) {
          FUN_03326994(local_1a0,&DAT_04450db8,2);
          local_1a8 = FUN_033785d8(lVar4);
          lVar11 = FUN_03326338(local_1a0,
                                "No registered loader was found for the format \"{}\". Have you included hkCompat as a product feature or used the asset conversion tool to convert your assets?"
                                ,&DAT_0411bac8,&local_1a8);
          uVar7 = 0x1d1;
          goto LAB_0339e668;
        }
        FUN_03326a7c(local_1a0,&DAT_04450db8,2);
        local_1b0 = FUN_033785d8(lVar4);
        lVar11 = FUN_03326338(local_1a0,
                              "No registered loader was found for the format \"{}\". Have you included hkCompat as a product feature or used the asset conversion tool to convert your assets?"
                              ,&DAT_0411bac8,&local_1b0);
        uVar7 = 0x1d1;
      }
      *(char **)(lVar11 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
      *(undefined8 *)(lVar11 + 0x40) = uVar7;
      *(undefined4 *)(lVar11 + 0x1c) = 0xc8920001;
      goto LAB_0339e874;
    }
    if ((DAT_04450e08 < 2) && (uVar10 = FUN_03327170(), (uVar10 & 1) == 0)) goto LAB_0339e678;
    uVar10 = FUN_03327170();
    if ((uVar10 & 1) != 0) {
      FUN_03326a7c(local_1a0,&DAT_04450db8,2);
      lVar11 = FUN_03326338(local_1a0,"Failed to read input",PTR_DAT_04372528);
      *(char **)(lVar11 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
      *(undefined8 *)(lVar11 + 0x40) = 0x1c8;
      *(undefined4 *)(lVar11 + 0x1c) = 0xc8920000;
      goto LAB_0339e874;
    }
    FUN_03326994(local_1a0,&DAT_04450db8,2);
    lVar11 = FUN_03326338(local_1a0,"Failed to read input",PTR_DAT_04372528);
    *(char **)(lVar11 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
    *(undefined8 *)(lVar11 + 0x40) = 0x1c8;
    *(undefined4 *)(lVar11 + 0x1c) = 0xc8920000;
LAB_0339e670:
    FUN_033269dc(local_1a0);
  }
LAB_0339e678:
  lVar4 = 0;
joined_r0x0339e36c:
  if (lVar8 != 0) {
    puVar12 = *(undefined8 **)(lVar8 + 8);
    uVar10 = (long)puVar12 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar8 + 0x10)) &&
       (*(ulong *)(lVar8 + 8) = uVar10, puVar12 != (undefined8 *)0x0)) {
      *puVar12 = &DAT_03922da5;
      uVar7 = nn::os::GetSystemTick();
      puVar12[1] = uVar7;
    }
  }
  return lVar4;
}


