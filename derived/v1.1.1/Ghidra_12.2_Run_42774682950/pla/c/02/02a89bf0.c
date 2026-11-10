/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a89bf0; name: FUN_02a89bf0
 */


char * FUN_02a89bf0(undefined8 param_1,char *param_2,char *param_3,string *param_4,long param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  void *__src;
  size_t sVar10;
  void *pvVar11;
  
  if (param_2 == param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_02a861d0();
  }
  switch(*param_2) {
  case 'D':
    *(ushort *)(param_5 + 0xa2) = *(ushort *)(param_5 + 0xa2) | 0x800;
    break;
  case 'E':
  case 'F':
  case 'G':
  case 'H':
  case 'I':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'T':
  case 'U':
  case 'V':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'c':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'n':
  case 'o':
  case 'p':
  case 'q':
  case 'r':
  case 't':
  case 'u':
  case 'v':
switchD_02a89c40_caseD_45:
    pcVar6 = (char *)FUN_02a861dc(param_1,param_2);
    return pcVar6;
  case 'S':
    *(ushort *)(param_5 + 0xa2) = *(ushort *)(param_5 + 0xa2) | 0x2000;
    break;
  case 'W':
    *(ushort *)(param_5 + 0xa2) = *(ushort *)(param_5 + 0xa2) | 0xc00;
    plVar4 = DAT_043f1798;
    if (*(char *)(param_5 + 0xa5) == '\0') {
      puVar1 = *(undefined1 **)(param_5 + 0x48);
      puVar2 = *(undefined1 **)(param_5 + 0x50);
      if (*(char *)(param_5 + 0xa6) == '\0') {
        if (puVar1 != puVar2) goto LAB_02a8a00c;
      }
      else if (puVar1 < puVar2) {
LAB_02a8a00c:
        *puVar1 = 0x5f;
        goto LAB_02a8a014;
      }
      __src = *(void **)(param_5 + 0x40);
      sVar10 = (long)puVar1 - (long)__src;
      uVar7 = sVar10 + 1;
      if ((long)uVar7 < 0) {
LAB_02a8a2cc:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)puVar2 - (long)__src) < 0x3fffffffffffffff) {
        uVar8 = ((long)puVar2 - (long)__src) * 2;
        if (uVar7 <= uVar8) {
          uVar7 = uVar8;
        }
        if (uVar7 != 0) goto LAB_02a8a0b8;
        pvVar11 = (void *)0x0;
      }
      else {
        uVar7 = 0x7fffffffffffffff;
LAB_02a8a0b8:
        lVar3 = tpidr_el0;
        plVar9 = *(long **)(lVar3 + 0x20);
        if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
          *(long **)(lVar3 + 0x20) = DAT_043f1798;
          plVar9 = plVar4;
        }
        pvVar11 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar7,8);
      }
      *(undefined1 *)((long)pvVar11 + sVar10) = 0x5f;
      if (0 < (long)sVar10) {
        memcpy(pvVar11,__src,sVar10);
      }
      *(void **)(param_5 + 0x40) = pvVar11;
      *(undefined1 **)(param_5 + 0x48) = (undefined1 *)((long)pvVar11 + sVar10) + 1;
      *(ulong *)(param_5 + 0x50) = (long)pvVar11 + uVar7;
      plVar4 = DAT_043f1798;
    }
    else {
      uVar5 = (**(code **)(**(long **)(param_5 + 0x18) + 0x28))(*(long **)(param_5 + 0x18),0x5f);
      plVar4 = DAT_043f1798;
      puVar1 = *(undefined1 **)(param_5 + 0x48);
      if (puVar1 < *(undefined1 **)(param_5 + 0x50)) {
        *puVar1 = uVar5;
LAB_02a8a014:
        *(long *)(param_5 + 0x48) = *(long *)(param_5 + 0x48) + 1;
        break;
      }
      __src = *(void **)(param_5 + 0x40);
      sVar10 = (long)puVar1 - (long)__src;
      uVar7 = sVar10 + 1;
      if ((long)uVar7 < 0) goto LAB_02a8a2cc;
      uVar8 = (long)*(undefined1 **)(param_5 + 0x50) - (long)__src;
      if (uVar8 < 0x3fffffffffffffff) {
        uVar8 = uVar8 * 2;
        if (uVar7 <= uVar8) {
          uVar7 = uVar8;
        }
        if (uVar7 != 0) goto LAB_02a89f64;
        pvVar11 = (void *)0x0;
      }
      else {
        uVar7 = 0x7fffffffffffffff;
LAB_02a89f64:
        lVar3 = tpidr_el0;
        plVar9 = *(long **)(lVar3 + 0x20);
        if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
          *(long **)(lVar3 + 0x20) = DAT_043f1798;
          plVar9 = plVar4;
        }
        pvVar11 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar7,8);
      }
      *(undefined1 *)((long)pvVar11 + sVar10) = uVar5;
      if (0 < (long)sVar10) {
        memcpy(pvVar11,__src,sVar10);
      }
      *(void **)(param_5 + 0x40) = pvVar11;
      *(undefined1 **)(param_5 + 0x48) = (undefined1 *)((long)pvVar11 + sVar10) + 1;
      *(ulong *)(param_5 + 0x50) = (long)pvVar11 + uVar7;
      plVar4 = DAT_043f1798;
    }
joined_r0x02a8a0ac:
    DAT_043f1798 = plVar4;
    if (__src == (void *)0x0) break;
    lVar3 = tpidr_el0;
    plVar9 = *(long **)(lVar3 + 0x20);
    if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
      *(long **)(lVar3 + 0x20) = plVar4;
      plVar9 = plVar4;
    }
    uVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar7 & 1) != 0) {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
LAB_02a8a1b8:
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar9,__src,0,8);
        break;
      }
    }
    goto LAB_02a8a1cc;
  case 'b':
    std::string::operator=(param_4,'\b');
    break;
  case 'd':
    *(ushort *)(param_5 + 0xa0) = *(ushort *)(param_5 + 0xa0) | 0x800;
    break;
  case 's':
    *(ushort *)(param_5 + 0xa0) = *(ushort *)(param_5 + 0xa0) | 0x2000;
    break;
  case 'w':
    *(ushort *)(param_5 + 0xa0) = *(ushort *)(param_5 + 0xa0) | 0xc00;
    plVar4 = DAT_043f1798;
    if (*(char *)(param_5 + 0xa5) == '\0') {
      puVar1 = *(undefined1 **)(param_5 + 0x30);
      puVar2 = *(undefined1 **)(param_5 + 0x38);
      if (*(char *)(param_5 + 0xa6) == '\0') {
        if (puVar1 != puVar2) goto LAB_02a89ff0;
      }
      else if (puVar1 < puVar2) {
LAB_02a89ff0:
        *puVar1 = 0x5f;
        goto LAB_02a89ff8;
      }
      __src = *(void **)(param_5 + 0x28);
      sVar10 = (long)puVar1 - (long)__src;
      uVar7 = sVar10 + 1;
      if ((long)uVar7 < 0) goto LAB_02a8a2cc;
      if ((ulong)((long)puVar2 - (long)__src) < 0x3fffffffffffffff) {
        uVar8 = ((long)puVar2 - (long)__src) * 2;
        if (uVar7 <= uVar8) {
          uVar7 = uVar8;
        }
        if (uVar7 != 0) goto LAB_02a8a028;
        pvVar11 = (void *)0x0;
      }
      else {
        uVar7 = 0x7fffffffffffffff;
LAB_02a8a028:
        lVar3 = tpidr_el0;
        plVar9 = *(long **)(lVar3 + 0x20);
        if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
          *(long **)(lVar3 + 0x20) = DAT_043f1798;
          plVar9 = plVar4;
        }
        pvVar11 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar7,8);
      }
      *(undefined1 *)((long)pvVar11 + sVar10) = 0x5f;
      if (0 < (long)sVar10) {
        memcpy(pvVar11,__src,sVar10);
      }
      *(void **)(param_5 + 0x28) = pvVar11;
      *(undefined1 **)(param_5 + 0x30) = (undefined1 *)((long)pvVar11 + sVar10) + 1;
      *(ulong *)(param_5 + 0x38) = (long)pvVar11 + uVar7;
      plVar4 = DAT_043f1798;
      goto joined_r0x02a8a0ac;
    }
    uVar5 = (**(code **)(**(long **)(param_5 + 0x18) + 0x28))(*(long **)(param_5 + 0x18),0x5f);
    plVar4 = DAT_043f1798;
    puVar1 = *(undefined1 **)(param_5 + 0x30);
    if (puVar1 < *(undefined1 **)(param_5 + 0x38)) {
      *puVar1 = uVar5;
LAB_02a89ff8:
      *(long *)(param_5 + 0x30) = *(long *)(param_5 + 0x30) + 1;
      break;
    }
    __src = *(void **)(param_5 + 0x28);
    sVar10 = (long)puVar1 - (long)__src;
    uVar7 = sVar10 + 1;
    if ((long)uVar7 < 0) goto LAB_02a8a2cc;
    uVar8 = (long)*(undefined1 **)(param_5 + 0x38) - (long)__src;
    lVar3 = tpidr_el0;
    if (uVar8 < 0x3fffffffffffffff) {
      uVar8 = uVar8 * 2;
      if (uVar7 <= uVar8) {
        uVar7 = uVar8;
      }
      if (uVar7 != 0) goto LAB_02a89e68;
      pvVar11 = (void *)0x0;
    }
    else {
      uVar7 = 0x7fffffffffffffff;
LAB_02a89e68:
      plVar9 = *(long **)(lVar3 + 0x20);
      if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
        *(long **)(lVar3 + 0x20) = DAT_043f1798;
        plVar9 = plVar4;
      }
      pvVar11 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar7,8);
    }
    *(undefined1 *)((long)pvVar11 + sVar10) = uVar5;
    if (0 < (long)sVar10) {
      memcpy(pvVar11,__src,sVar10);
    }
    *(void **)(param_5 + 0x28) = pvVar11;
    *(undefined1 **)(param_5 + 0x30) = (undefined1 *)((long)pvVar11 + sVar10) + 1;
    *(ulong *)(param_5 + 0x38) = (long)pvVar11 + uVar7;
    plVar4 = DAT_043f1798;
    if (__src == (void *)0x0) break;
    plVar9 = *(long **)(lVar3 + 0x20);
    if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
      *(long **)(lVar3 + 0x20) = DAT_043f1798;
      plVar9 = plVar4;
    }
    uVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar7 & 1) != 0) {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      goto LAB_02a8a1b8;
    }
LAB_02a8a1cc:
    (**(code **)(*plVar9 + 0x18))(plVar9,__src,0,8);
    break;
  default:
    if (*param_2 != '\0') goto switchD_02a89c40_caseD_45;
    std::string::operator=(param_4,'\0');
  }
  return param_2 + 1;
}


