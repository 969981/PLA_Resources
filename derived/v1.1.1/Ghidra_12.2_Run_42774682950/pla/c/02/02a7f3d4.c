/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a7f3d4; name: FUN_02a7f3d4
 */


byte * FUN_02a7f3d4(long param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  ushort uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  void *__src;
  byte *pbVar19;
  size_t sVar20;
  void *pvVar21;
  
  plVar7 = DAT_043f1798;
  if (param_2 == (byte *)0x38d87af) {
    return (byte *)0x38d87af;
  }
  switch(*param_2) {
  case 0x24:
  case 0x29:
  case 0x5d:
  case 0x5e:
  case 0x7c:
  case 0x7d:
    goto switchD_02a7f430_caseD_24;
  default:
    FUN_02a86478(param_1);
    break;
  case 0x28:
    pbVar10 = param_2 + 1;
    if (pbVar10 == (byte *)0x38d87af) goto LAB_02a7fd30;
    if (((param_2 + 2 == (byte *)0x38d87af) || (*pbVar10 != 0x3f)) || (param_2[2] != 0x3a)) {
      if ((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0) {
        lVar14 = tpidr_el0;
        plVar16 = *(long **)(lVar14 + 0x20);
        if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
          *(long **)(lVar14 + 0x20) = DAT_043f1798;
          plVar16 = plVar7;
        }
        puVar9 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16,0x18,8);
        iVar2 = *(int *)(param_1 + 0x1c) + 1;
        lVar14 = *(long *)(param_1 + 0x38);
        *(int *)(param_1 + 0x1c) = iVar2;
        uVar17 = *(undefined8 *)(lVar14 + 8);
        *puVar9 = &PTR_LAB_0427f478;
        puVar9[1] = uVar17;
        *(int *)(puVar9 + 2) = iVar2;
        *(undefined8 **)(lVar14 + 8) = puVar9;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      }
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      param_2 = (byte *)FUN_02a7df84(param_1,pbVar10);
      plVar7 = DAT_043f1798;
      if ((param_2 == (byte *)0x38d87af) || (*param_2 != 0x29)) goto LAB_02a7fd30;
      if ((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0) {
        lVar14 = tpidr_el0;
        plVar16 = *(long **)(lVar14 + 0x20);
        if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
          *(long **)(lVar14 + 0x20) = DAT_043f1798;
          plVar16 = plVar7;
        }
        puVar9 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16,0x18,8);
        lVar14 = *(long *)(param_1 + 0x38);
        uVar17 = *(undefined8 *)(lVar14 + 8);
        *puVar9 = &PTR_LAB_0427f4a8;
        puVar9[1] = uVar17;
        *(undefined4 *)(puVar9 + 2) = uVar4;
        *(undefined8 **)(lVar14 + 8) = puVar9;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      }
    }
    else {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      param_2 = (byte *)FUN_02a7df84(param_1,param_2 + 3);
      if ((param_2 == (byte *)0x38d87af) || (*param_2 != 0x29)) goto LAB_02a7fd30;
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    break;
  case 0x2a:
  case 0x2b:
  case 0x3f:
  case 0x7b:
    FUN_02a86060();
LAB_02a7fd30:
                    /* WARNING: Subroutine does not return */
    FUN_02a80af0();
  case 0x2e:
    lVar14 = tpidr_el0;
    plVar16 = *(long **)(lVar14 + 0x20);
    if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
      *(long **)(lVar14 + 0x20) = DAT_043f1798;
      plVar16 = plVar7;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16,0x10,8);
    lVar14 = *(long *)(param_1 + 0x38);
    uVar17 = *(undefined8 *)(lVar14 + 8);
    *puVar9 = &PTR_LAB_0427f2f8;
    puVar9[1] = uVar17;
    *(undefined8 **)(lVar14 + 8) = puVar9;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    break;
  case 0x5b:
    pbVar10 = (byte *)FUN_02a82fdc(param_1,param_2,"");
    return pbVar10;
  case 0x5c:
    pbVar10 = param_2 + 1;
    if (pbVar10 == (byte *)0x38d87af) {
                    /* WARNING: Subroutine does not return */
      FUN_02a861d0();
    }
    bVar5 = *pbVar10;
    uVar12 = bVar5 - 0x30;
    if (uVar12 == 0) {
      FUN_02a86478(param_1);
      return param_2 + 2;
    }
    if (bVar5 - 0x31 < 9) {
      if (param_2 == (byte *)0x38d87ad) {
        pbVar19 = (byte *)0x38d87af;
      }
      else {
        pbVar19 = param_2;
        do {
          pbVar1 = pbVar19 + 2;
          if (9 < *pbVar1 - 0x30) {
            pbVar19 = pbVar19 + 2;
            goto joined_r0x02a7f764;
          }
          if (0x19999998 < uVar12) goto LAB_02a7fd34;
          pbVar19 = pbVar19 + 1;
          uVar12 = ((uint)*pbVar1 + uVar12 * 10) - 0x30;
        } while (pbVar19 != (byte *)0x38d87ad);
        pbVar19 = (byte *)0x38d87af;
joined_r0x02a7f764:
        if (uVar12 == 0) goto LAB_02a7fd34;
      }
      if (*(uint *)(param_1 + 0x1c) < uVar12) {
LAB_02a7fd34:
                    /* WARNING: Subroutine does not return */
        FUN_02a86630();
      }
      FUN_02a8663c(param_1);
      if (pbVar19 != pbVar10) {
        return pbVar19;
      }
      bVar5 = *pbVar10;
    }
    switch(bVar5) {
    case 0x44:
      uVar17 = 1;
      break;
    default:
      pbVar19 = (byte *)FUN_02a861dc(param_1,pbVar10,"",0);
      if (pbVar19 != pbVar10) {
        param_2 = pbVar19;
      }
      return param_2;
    case 0x53:
      uVar17 = 1;
      goto LAB_02a7f8dc;
    case 0x57:
      lVar14 = FUN_02a874e0(param_1,1);
      *(ushort *)(lVar14 + 0xa0) = *(ushort *)(lVar14 + 0xa0) | 0xc00;
      if (*(char *)(lVar14 + 0xa5) == '\0') {
LAB_02a7f8f4:
        plVar7 = DAT_043f1798;
        puVar18 = *(undefined1 **)(lVar14 + 0x30);
        puVar3 = *(undefined1 **)(lVar14 + 0x38);
        if (*(char *)(lVar14 + 0xa6) == '\0') {
          if (puVar18 != puVar3) goto LAB_02a7f988;
        }
        else if (puVar18 < puVar3) {
LAB_02a7f988:
          *puVar18 = 0x5f;
LAB_02a7f990:
          *(long *)(lVar14 + 0x30) = *(long *)(lVar14 + 0x30) + 1;
          return param_2 + 2;
        }
        __src = *(void **)(lVar14 + 0x28);
        sVar20 = (long)puVar18 - (long)__src;
        uVar11 = sVar20 + 1;
        if ((long)uVar11 < 0) {
LAB_02a7fd3c:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)puVar3 - (long)__src) < 0x3fffffffffffffff) {
          uVar15 = ((long)puVar3 - (long)__src) * 2;
          if (uVar11 <= uVar15) {
            uVar11 = uVar15;
          }
          if (uVar11 != 0) goto LAB_02a7f9a8;
          pvVar21 = (void *)0x0;
        }
        else {
          uVar11 = 0x7fffffffffffffff;
LAB_02a7f9a8:
          lVar6 = tpidr_el0;
          plVar16 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar16 = plVar7;
          }
          pvVar21 = (void *)(**(code **)(*plVar16 + 0x10))(plVar16,uVar11,8);
        }
        *(undefined1 *)((long)pvVar21 + sVar20) = 0x5f;
        if (0 < (long)sVar20) {
          memcpy(pvVar21,__src,sVar20);
        }
        *(void **)(lVar14 + 0x28) = pvVar21;
        *(undefined1 **)(lVar14 + 0x30) = (undefined1 *)((long)pvVar21 + sVar20) + 1;
        *(ulong *)(lVar14 + 0x38) = (long)pvVar21 + uVar11;
        plVar7 = DAT_043f1798;
      }
      else {
        uVar8 = (**(code **)(**(long **)(lVar14 + 0x18) + 0x28))(*(long **)(lVar14 + 0x18),0x5f);
        plVar7 = DAT_043f1798;
        puVar18 = *(undefined1 **)(lVar14 + 0x30);
        if (puVar18 < *(undefined1 **)(lVar14 + 0x38)) {
LAB_02a7f884:
          *puVar18 = uVar8;
          goto LAB_02a7f990;
        }
        __src = *(void **)(lVar14 + 0x28);
        sVar20 = (long)puVar18 - (long)__src;
        uVar11 = sVar20 + 1;
        if ((long)uVar11 < 0) goto LAB_02a7fd3c;
        uVar15 = (long)*(undefined1 **)(lVar14 + 0x38) - (long)__src;
        if (uVar15 < 0x3fffffffffffffff) {
          uVar15 = uVar15 * 2;
          if (uVar11 <= uVar15) {
            uVar11 = uVar15;
          }
          if (uVar11 != 0) goto LAB_02a7fa38;
          pvVar21 = (void *)0x0;
        }
        else {
          uVar11 = 0x7fffffffffffffff;
LAB_02a7fa38:
          lVar6 = tpidr_el0;
          plVar16 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar16 = plVar7;
          }
          pvVar21 = (void *)(**(code **)(*plVar16 + 0x10))(plVar16,uVar11,8);
        }
        *(undefined1 *)((long)pvVar21 + sVar20) = uVar8;
        if (0 < (long)sVar20) {
          memcpy(pvVar21,__src,sVar20);
        }
        *(void **)(lVar14 + 0x28) = pvVar21;
        *(undefined1 **)(lVar14 + 0x30) = (undefined1 *)((long)pvVar21 + sVar20) + 1;
        *(ulong *)(lVar14 + 0x38) = (long)pvVar21 + uVar11;
        plVar7 = DAT_043f1798;
      }
      DAT_043f1798 = plVar7;
      if (__src == (void *)0x0) goto LAB_02a7fc60;
      lVar6 = tpidr_el0;
      plVar16 = *(long **)(lVar6 + 0x20);
      if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
        *(long **)(lVar6 + 0x20) = plVar7;
        plVar16 = plVar7;
      }
      uVar11 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar11 & 1) != 0) {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
LAB_02a7fc30:
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar16,__src,0,8);
          return param_2 + 2;
        }
      }
      goto LAB_02a7fc44;
    case 100:
      uVar17 = 0;
      break;
    case 0x73:
      uVar17 = 0;
LAB_02a7f8dc:
      lVar14 = FUN_02a874e0(param_1,uVar17);
      uVar13 = *(ushort *)(lVar14 + 0xa0) | 0x2000;
      goto LAB_02a7f8e8;
    case 0x77:
      lVar14 = FUN_02a874e0(param_1,0);
      *(ushort *)(lVar14 + 0xa0) = *(ushort *)(lVar14 + 0xa0) | 0xc00;
      if (*(char *)(lVar14 + 0xa5) == '\0') goto LAB_02a7f8f4;
      uVar8 = (**(code **)(**(long **)(lVar14 + 0x18) + 0x28))(*(long **)(lVar14 + 0x18),0x5f);
      plVar7 = DAT_043f1798;
      puVar18 = *(undefined1 **)(lVar14 + 0x30);
      if (puVar18 < *(undefined1 **)(lVar14 + 0x38)) goto LAB_02a7f884;
      __src = *(void **)(lVar14 + 0x28);
      sVar20 = (long)puVar18 - (long)__src;
      uVar11 = sVar20 + 1;
      if ((long)uVar11 < 0) goto LAB_02a7fd3c;
      uVar15 = (long)*(undefined1 **)(lVar14 + 0x38) - (long)__src;
      lVar6 = tpidr_el0;
      if (uVar15 < 0x3fffffffffffffff) {
        uVar15 = uVar15 * 2;
        if (uVar11 <= uVar15) {
          uVar11 = uVar15;
        }
        if (uVar11 != 0) goto LAB_02a7fb3c;
        pvVar21 = (void *)0x0;
      }
      else {
        uVar11 = 0x7fffffffffffffff;
LAB_02a7fb3c:
        plVar16 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar16 = plVar7;
        }
        pvVar21 = (void *)(**(code **)(*plVar16 + 0x10))(plVar16,uVar11,8);
      }
      *(undefined1 *)((long)pvVar21 + sVar20) = uVar8;
      if (0 < (long)sVar20) {
        memcpy(pvVar21,__src,sVar20);
      }
      *(void **)(lVar14 + 0x28) = pvVar21;
      *(undefined1 **)(lVar14 + 0x30) = (undefined1 *)((long)pvVar21 + sVar20) + 1;
      *(ulong *)(lVar14 + 0x38) = (long)pvVar21 + uVar11;
      plVar7 = DAT_043f1798;
      if (__src == (void *)0x0) goto LAB_02a7fc60;
      plVar16 = *(long **)(lVar6 + 0x20);
      if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
        *(long **)(lVar6 + 0x20) = DAT_043f1798;
        plVar16 = plVar7;
      }
      uVar11 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar11 & 1) != 0) {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        goto LAB_02a7fc30;
      }
LAB_02a7fc44:
      (**(code **)(*plVar16 + 0x18))(plVar16,__src,0,8);
LAB_02a7fc60:
      return param_2 + 2;
    }
    lVar14 = FUN_02a874e0(param_1,uVar17);
    uVar13 = *(ushort *)(lVar14 + 0xa0) | 0x800;
LAB_02a7f8e8:
    *(ushort *)(lVar14 + 0xa0) = uVar13;
    param_2 = param_2 + 2;
    goto switchD_02a7f430_caseD_24;
  }
  param_2 = param_2 + 1;
switchD_02a7f430_caseD_24:
  return param_2;
}


