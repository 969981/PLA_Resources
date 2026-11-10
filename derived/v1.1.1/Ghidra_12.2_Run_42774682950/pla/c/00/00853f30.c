/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00853f30; name: FUN_00853f30
 */


void FUN_00853f30(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  int local_88 [4];
  int local_78 [4];
  undefined4 local_68 [2];
  
  plVar16 = (long *)*param_3;
  uVar5 = *(ushort *)(param_3 + 1);
  local_78[0] = 0;
  local_88[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_88);
  if (plVar16 == (long *)0x0) {
    local_88[0] = 0x10407;
  }
  else if ((((*(short *)((long)param_3 + 10) == 0) || (*(short *)((long)param_3 + 0xc) == 0)) ||
           (*(int *)(param_3 + 4) < -1)) ||
          (((*(int *)((long)param_3 + 0x24) < -1 || (uVar5 < 2)) ||
           (uVar8 = (**(code **)(*plVar16 + 0x10))(plVar16), uVar8 < uVar5)))) {
    local_88[0] = 0x10407;
  }
  else {
    plVar16 = (long *)(**(code **)(*plVar16 + 0x38))(plVar16);
    *(long **)(param_2 + 8) = plVar16;
    (**(code **)(*plVar16 + 0xc0))(local_88);
    FUN_007ee660(local_78,local_88);
    uVar11 = (**(code **)(**(long **)(param_2 + 8) + 0xa0))();
    *(undefined8 *)(param_2 + 0x68) = uVar11;
    uVar11 = (**(code **)(**(long **)(param_2 + 8) + 0x98))();
    *(undefined8 *)(param_2 + 0x60) = uVar11;
    uVar11 = FUN_007e336c();
    plVar16 = (long *)FUN_0081a750(0x28,uVar11);
    if (plVar16 != (long *)0x0) {
      plVar16[3] = 0;
      plVar16[4] = 0;
      *plVar16 = 0;
      plVar16[1] = 0;
      plVar16[2] = 0;
      FUN_007e5db0(plVar16);
      *plVar16 = (long)(PTR_DAT_04378090 + 0x10);
    }
    *(long **)(param_2 + 0x58) = plVar16;
    lVar17 = *(long *)PTR_DAT_04377480;
    uVar9 = (**(code **)(**(long **)(param_2 + 8) + 0x18))();
    *(undefined4 *)(lVar17 + 4) = uVar9;
    lVar17 = param_2 + 0x10;
    *(ushort *)(param_2 + 0x50) = uVar5;
    FUN_0084775c(local_88,lVar17,*(undefined8 *)(param_2 + 8));
    FUN_007ee660(local_78,local_88);
    (**(code **)(**(long **)(param_2 + 0x60) + 0x10))
              (local_88,*(long **)(param_2 + 0x60),*(undefined8 *)(param_2 + 8),uVar5);
    FUN_007ee660(local_78,local_88);
    if (local_78[0] != 0) goto LAB_00854134;
    uVar9 = (**(code **)(**(long **)(param_2 + 8) + 0x18))();
    uVar11 = FUN_007e336c();
    lVar12 = FUN_0081a750(0x1940,uVar11);
    if (lVar12 == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      FUN_00844910(lVar12,"Pia Send",uVar9);
      *(long *)(param_2 + 0x78) = lVar12;
      uVar9 = (**(code **)(**(long **)(param_2 + 8) + 0x18))();
      uVar11 = FUN_007e336c();
      lVar12 = FUN_0081a750(0x1940,uVar11);
      if (lVar12 == 0) {
        *(undefined8 *)(param_2 + 0x80) = 0;
      }
      else {
        FUN_00844910(lVar12,"Pia Send Unicast",uVar9);
        *(long *)(param_2 + 0x80) = lVar12;
        uVar9 = (**(code **)(**(long **)(param_2 + 8) + 0x18))();
        uVar11 = FUN_007e336c();
        lVar12 = FUN_0081a750(0x1940,uVar11);
        if (lVar12 == 0) {
          *(undefined8 *)(param_2 + 0x88) = 0;
        }
        else {
          FUN_00844910(lVar12,"Pia Send Broadcast",uVar9);
          *(long *)(param_2 + 0x88) = lVar12;
          uVar9 = (**(code **)(**(long **)(param_2 + 8) + 0x18))();
          uVar11 = FUN_007e336c();
          lVar12 = FUN_0081a750(0x1940,uVar11);
          if (lVar12 != 0) {
            FUN_00844910(lVar12,"Pia Receive",uVar9);
            uVar15 = *(undefined8 *)(param_2 + 8);
            *(long *)(param_2 + 0x90) = lVar12;
            uVar5 = *(ushort *)((long)param_3 + 10);
            uVar8 = *(ushort *)(param_3 + 1);
            uVar6 = *(ushort *)((long)param_3 + 0xc);
            uVar2 = *(undefined4 *)PTR_DAT_04378098;
            uVar3 = *(undefined4 *)(PTR_DAT_04378098 + 4);
            uVar9 = *(undefined4 *)(param_3 + 2);
            uVar1 = *(undefined4 *)((long)param_3 + 0x14);
            cVar4 = PTR_DAT_04378098[8];
            uVar11 = FUN_007e336c();
            lVar12 = FUN_0081a750(0x28,uVar11);
            if (lVar12 != 0) {
              FUN_008551fc(lVar12,uVar15,(uint)uVar5 * (uVar8 - 1) + 1,(uint)uVar6 * (uVar8 - 1) + 1
                           ,uVar2,uVar3,uVar9,uVar1,cVar4 != '\0');
            }
            *(long *)(param_2 + 0x70) = lVar12;
            uVar11 = (**(code **)(**(long **)(param_2 + 8) + 0x48))();
            *(undefined8 *)(param_2 + 0x40) = uVar11;
            uVar11 = (**(code **)(**(long **)(param_2 + 8) + 0x50))();
            *(undefined8 *)(param_2 + 0x48) = uVar11;
            (**(code **)(**(long **)(param_2 + 0x40) + 0x10))(local_88);
            FUN_007ee660(local_78,local_88);
            if (local_78[0] == 0) {
              (**(code **)(**(long **)(param_2 + 0x48) + 0x10))(local_88);
              FUN_007ee660(local_78,local_88);
              if (local_78[0] == 0) {
                (**(code **)(**(long **)(param_2 + 8) + 0xb8))(local_88);
                FUN_007ee660(local_78,local_88);
                if (local_78[0] == 0) {
                  if (*(long *)(param_2 + 0x68) != 0) {
                    FUN_0085700c(local_88);
                    FUN_007ee660(local_78,local_88);
                    if (local_78[0] != 0) goto LAB_00854134;
                    *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_3 + 3);
                    *(undefined1 *)(param_2 + 0xa8) = *(undefined1 *)((long)param_3 + 0x1c);
                    *(undefined1 *)(param_2 + 0xa9) = *(undefined1 *)((long)param_3 + 0x1d);
                    iVar10 = *(int *)(param_3 + 4);
                    if (iVar10 == -1) {
                      iVar10 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
                    }
                    *(int *)(param_2 + 0xac) = iVar10;
                    iVar10 = *(int *)((long)param_3 + 0x24);
                    if (iVar10 == -1) {
                      iVar10 = (**(code **)(**(long **)(param_2 + 8) + 0x70))();
                    }
                    *(int *)(param_2 + 0xb0) = iVar10;
                  }
                  if (*(char *)(param_2 + 0x38) == '\0') {
                    puVar13 = (undefined8 *)FUN_008477c4(lVar17,0x60);
                    FUN_00856a88();
                    iVar10 = FUN_00847840(lVar17,puVar13,0xa4000000);
                    if (iVar10 == *(int *)PTR_DAT_043779d0) {
                      (**(code **)*puVar13)(puVar13);
                      FUN_008477a0(lVar17,puVar13);
                    }
                    DAT_043a57f8 = iVar10;
                    if (iVar10 != 0) {
                      DAT_043a5800 = FUN_00847ad0(lVar17,iVar10,0xa4);
                      lVar17 = FUN_007e4e20();
                      if (lVar17 != 0) {
                        uVar11 = FUN_007e4e20();
                        FUN_007e5470(uVar11,&LAB_00854b80);
                      }
                    }
                  }
                  else {
                    DAT_043a57f8 = 0;
                  }
                  puVar7 = PTR_DAT_043773b8;
                  *(undefined2 *)(PTR_DAT_043773b8 + 0x3c4) = *(undefined2 *)(param_3 + 1);
                  *(undefined2 *)(puVar7 + 0x3c6) = *(undefined2 *)((long)param_3 + 10);
                  local_88[0] = 0;
                  *(undefined2 *)(puVar7 + 0x3c8) = *(undefined2 *)((long)param_3 + 0xc);
                  goto LAB_00853ff0;
                }
              }
            }
LAB_00854134:
            piVar14 = local_78;
            goto LAB_00854000;
          }
          *(undefined8 *)(param_2 + 0x90) = 0;
        }
      }
    }
    local_88[0] = 0x10401;
  }
LAB_00853ff0:
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_68);
  piVar14 = local_88;
LAB_00854000:
  FUN_007ee578(param_1,piVar14);
  return;
}


