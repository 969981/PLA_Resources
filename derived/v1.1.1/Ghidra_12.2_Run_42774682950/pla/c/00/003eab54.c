/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eab54; name: FUN_003eab54
 */


void FUN_003eab54(long *param_1,__tree_node_base *param_2,__tree_node_base *param_3)

{
  ulong uVar1;
  size_t __n;
  byte bVar2;
  bool bVar3;
  int iVar4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  long *plVar7;
  __tree_node_base *p_Var8;
  long lVar9;
  ulong uVar10;
  void *__s2;
  __tree_node_base *p_Var11;
  long *plVar12;
  long *plVar13;
  
  if (param_1[2] != 0) {
    p_Var5 = (__tree_node_base *)*param_1;
    plVar12 = param_1 + 1;
    *param_1 = (long)plVar12;
    *(undefined8 *)(*plVar12 + 0x10) = 0;
    param_1[2] = 0;
    *plVar12 = 0;
    p_Var8 = *(__tree_node_base **)(p_Var5 + 8);
    if (p_Var8 != (__tree_node_base *)0x0) {
      p_Var5 = p_Var8;
    }
    if (p_Var5 == (__tree_node_base *)0x0) {
      FUN_003e9f80(param_1,0);
    }
    else {
      p_Var8 = *(__tree_node_base **)(p_Var5 + 0x10);
      if (p_Var8 != (__tree_node_base *)0x0) {
        p_Var6 = *(__tree_node_base **)p_Var8;
        if (p_Var6 == p_Var5) {
          *(long *)p_Var8 = 0;
          while (p_Var6 = *(__tree_node_base **)(p_Var8 + 8),
                *(__tree_node_base **)(p_Var8 + 8) != (__tree_node_base *)0x0) {
            do {
              p_Var8 = p_Var6;
              p_Var6 = *(__tree_node_base **)p_Var8;
            } while (*(__tree_node_base **)p_Var8 != (__tree_node_base *)0x0);
          }
        }
        else {
          *(long *)(p_Var8 + 8) = 0;
          while (p_Var6 != (__tree_node_base *)0x0) {
            do {
              p_Var8 = p_Var6;
              p_Var6 = *(__tree_node_base **)p_Var8;
            } while (*(__tree_node_base **)p_Var8 != (__tree_node_base *)0x0);
            p_Var6 = *(__tree_node_base **)(p_Var8 + 8);
          }
        }
      }
      p_Var6 = param_2;
      p_Var11 = p_Var5;
      if (param_2 != param_3) {
LAB_003eacc8:
        p_Var5 = p_Var8;
        if (p_Var11 != p_Var6) {
          uVar10 = *(ulong *)(p_Var6 + 0x28);
          p_Var8 = *(__tree_node_base **)(p_Var6 + 0x30);
          if (((byte)p_Var6[0x20] & 1) == 0) {
            p_Var8 = p_Var6 + 0x21;
            uVar10 = (ulong)((byte)p_Var6[0x20] >> 1);
          }
                    /* try { // try from 003eacf8 to 003ead83 has its CatchHandler @ 003eaf34 */
          FUN_00291910(p_Var11 + 0x20,p_Var8,uVar10);
        }
        iVar4 = *(int *)(p_Var6 + 0x38);
        *(int *)(p_Var11 + 0x38) = iVar4;
        if (iVar4 - 3U < 2) {
          if (p_Var11 != p_Var6) {
            uVar10 = *(ulong *)(p_Var6 + 0x48);
            p_Var8 = *(__tree_node_base **)(p_Var6 + 0x50);
            if (((byte)p_Var6[0x40] & 1) == 0) {
              p_Var8 = p_Var6 + 0x41;
              uVar10 = (ulong)((byte)p_Var6[0x40] >> 1);
            }
            FUN_00291910(p_Var11 + 0x40,p_Var8,uVar10);
          }
        }
        else if (iVar4 == 5) {
          if (p_Var11 != p_Var6) {
            FUN_003eab54(p_Var11 + 0x58,*(long *)(p_Var6 + 0x58),p_Var6 + 0x60);
          }
        }
        else if ((iVar4 == 6) && (p_Var11 != p_Var6)) {
          FUN_003eb180(p_Var11 + 0x70,*(long *)(p_Var6 + 0x70),*(long *)(p_Var6 + 0x78));
        }
        plVar13 = (long *)*plVar12;
        if (plVar13 != (long *)0x0) {
          uVar10 = (ulong)((byte)p_Var11[0x20] >> 1);
          p_Var8 = *(__tree_node_base **)(p_Var11 + 0x30);
          if (((byte)p_Var11[0x20] & 1) == 0) {
            p_Var8 = p_Var11 + 0x21;
          }
          else {
            uVar10 = *(ulong *)(p_Var11 + 0x28);
          }
          do {
            bVar2 = *(byte *)(plVar13 + 4);
            uVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              uVar1 = plVar13[5];
            }
            __n = uVar1;
            if (uVar10 <= uVar1) {
              __n = uVar10;
            }
            if (__n == 0) {
LAB_003eae00:
              if (uVar10 < uVar1) goto LAB_003eadf4;
LAB_003eada8:
              plVar7 = (long *)plVar13[1];
              if (plVar7 == (long *)0x0) {
                plVar7 = plVar13 + 1;
                goto LAB_003eae24;
              }
            }
            else {
              __s2 = (void *)plVar13[6];
              if ((bVar2 & 1) == 0) {
                __s2 = (void *)((long)plVar13 + 0x21);
              }
              iVar4 = memcmp(p_Var8,__s2,__n);
              if (iVar4 == 0) goto LAB_003eae00;
              if (-1 < iVar4) goto LAB_003eada8;
LAB_003eadf4:
              plVar7 = (long *)*plVar13;
              if (plVar7 == (long *)0x0) goto LAB_003eae20;
            }
            plVar13 = plVar7;
          } while( true );
        }
        plVar7 = plVar12;
        plVar13 = plVar12;
        goto LAB_003eae24;
      }
LAB_003eac1c:
      FUN_003e9f80(param_1,p_Var5);
      if (p_Var8 != (__tree_node_base *)0x0) {
        p_Var5 = *(__tree_node_base **)(p_Var8 + 0x10);
        while (p_Var6 = p_Var5, p_Var6 != (__tree_node_base *)0x0) {
          p_Var8 = p_Var6;
          p_Var5 = *(__tree_node_base **)(p_Var6 + 0x10);
        }
        FUN_003e9f80(param_1,p_Var8);
      }
    }
  }
  while (param_2 != param_3) {
    FUN_003eaf70(param_1,param_2 + 0x20);
    p_Var5 = *(__tree_node_base **)(param_2 + 8);
    if (*(__tree_node_base **)(param_2 + 8) == (__tree_node_base *)0x0) {
      p_Var5 = param_2 + 0x10;
      bVar3 = *(__tree_node_base **)*(__tree_node_base **)p_Var5 != param_2;
      param_2 = *(__tree_node_base **)p_Var5;
      if (bVar3) {
        do {
          lVar9 = *(long *)p_Var5;
          p_Var5 = (__tree_node_base *)(lVar9 + 0x10);
          param_2 = *(__tree_node_base **)p_Var5;
        } while (*(long *)*(__tree_node_base **)p_Var5 != lVar9);
      }
    }
    else {
      do {
        param_2 = p_Var5;
        p_Var5 = *(__tree_node_base **)param_2;
      } while (p_Var5 != (__tree_node_base *)0x0);
    }
  }
  return;
LAB_003eae20:
  plVar7 = plVar13;
LAB_003eae24:
  *(long *)p_Var11 = 0;
  *(long *)(p_Var11 + 8) = 0;
  *(long **)(p_Var11 + 0x10) = plVar13;
  *plVar7 = (long)p_Var11;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    p_Var11 = (__tree_node_base *)*plVar7;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],p_Var11);
  param_1[2] = param_1[2] + 1;
  p_Var8 = p_Var5;
  if (p_Var5 == (__tree_node_base *)0x0) goto LAB_003eaec4;
  p_Var8 = *(__tree_node_base **)(p_Var5 + 0x10);
  if (p_Var8 == (__tree_node_base *)0x0) {
    p_Var8 = (__tree_node_base *)0x0;
    p_Var11 = *(__tree_node_base **)(p_Var6 + 8);
    goto joined_r0x003eae9c;
  }
  p_Var11 = *(__tree_node_base **)p_Var8;
  if (p_Var11 == p_Var5) {
    *(long *)p_Var8 = 0;
    p_Var11 = *(__tree_node_base **)(p_Var8 + 8);
    if (*(__tree_node_base **)(p_Var8 + 8) == (__tree_node_base *)0x0) goto LAB_003eaedc;
    do {
      do {
        p_Var8 = p_Var11;
        p_Var11 = *(__tree_node_base **)p_Var8;
      } while (*(__tree_node_base **)p_Var8 != (__tree_node_base *)0x0);
      p_Var11 = *(__tree_node_base **)(p_Var8 + 8);
    } while (*(__tree_node_base **)(p_Var8 + 8) != (__tree_node_base *)0x0);
  }
  else {
    *(long *)(p_Var8 + 8) = 0;
    if (p_Var11 == (__tree_node_base *)0x0) {
LAB_003eaedc:
      p_Var11 = *(__tree_node_base **)(p_Var6 + 8);
      goto joined_r0x003eae9c;
    }
    do {
      do {
        p_Var8 = p_Var11;
        p_Var11 = *(__tree_node_base **)p_Var8;
      } while (*(__tree_node_base **)p_Var8 != (__tree_node_base *)0x0);
      p_Var11 = *(__tree_node_base **)(p_Var8 + 8);
    } while (*(__tree_node_base **)(p_Var8 + 8) != (__tree_node_base *)0x0);
  }
LAB_003eaec4:
  p_Var11 = *(__tree_node_base **)(p_Var6 + 8);
joined_r0x003eae9c:
  if (p_Var11 == (__tree_node_base *)0x0) {
    p_Var11 = p_Var6 + 0x10;
    param_2 = *(__tree_node_base **)p_Var11;
    if (*(__tree_node_base **)param_2 != p_Var6) {
      do {
        lVar9 = *(long *)p_Var11;
        p_Var11 = (__tree_node_base *)(lVar9 + 0x10);
        param_2 = *(__tree_node_base **)p_Var11;
      } while (*(long *)param_2 != lVar9);
    }
  }
  else {
    do {
      param_2 = p_Var11;
      p_Var11 = *(__tree_node_base **)param_2;
    } while (*(__tree_node_base **)param_2 != (__tree_node_base *)0x0);
  }
  p_Var6 = param_2;
  p_Var11 = p_Var5;
  if (param_2 == param_3 || p_Var5 == (__tree_node_base *)0x0) goto LAB_003eac1c;
  goto LAB_003eacc8;
}


