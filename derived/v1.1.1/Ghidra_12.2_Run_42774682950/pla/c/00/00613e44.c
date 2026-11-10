/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00613e44; name: FUN_00613e44
 */


void FUN_00613e44(long *param_1,long *param_2)

{
  __tree_node_base *p_Var1;
  ulong uVar2;
  size_t __n;
  __tree_node_base *p_Var3;
  byte bVar4;
  __tree_node_base _Var5;
  int iVar6;
  ulong uVar7;
  __tree_node_base *p_Var8;
  long *plVar9;
  long lVar10;
  __tree_node_base *p_Var11;
  long lVar12;
  void *__s2;
  long *plVar13;
  __tree_node_base *p_Var14;
  __tree_node_base *p_Var15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  __tree_node_base *local_70;
  __tree_node_base *p_Stack_68;
  
  if (((long *)param_1[2] == (long *)param_2[2]) ||
     (uVar7 = (**(code **)(*(long *)param_1[2] + 0x20))(), (uVar7 & 1) != 0)) {
    plVar13 = param_1 + 1;
    FUN_02767254(param_1,*plVar13);
    *param_1 = *param_2;
    lVar10 = param_2[1];
    *plVar13 = lVar10;
    lVar12 = param_2[3];
    param_1[3] = lVar12;
    if (lVar12 == 0) {
      *param_1 = (long)plVar13;
    }
    else {
      *(long **)(lVar10 + 0x10) = plVar13;
      param_2[3] = 0;
      *param_2 = (long)(param_2 + 1);
      param_2[1] = 0;
    }
  }
  else {
    plVar13 = param_1 + 1;
    if (param_1[3] == 0) goto LAB_0061432c;
    p_Var14 = (__tree_node_base *)*param_1;
    *param_1 = (long)plVar13;
    *(undefined8 *)(param_1[1] + 0x10) = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    p_Var11 = *(__tree_node_base **)(p_Var14 + 8);
    if (p_Var11 != (__tree_node_base *)0x0) {
      p_Var14 = p_Var11;
    }
    if (p_Var14 == (__tree_node_base *)0x0) {
      FUN_02767254(param_1,0);
      lVar10 = param_2[3];
    }
    else {
      p_Var11 = *(__tree_node_base **)(p_Var14 + 0x10);
      if (p_Var11 == (__tree_node_base *)0x0) {
LAB_00613f80:
        p_Var8 = p_Var11;
        p_Var11 = p_Var8;
        if (param_2[3] != 0) {
          p_Var15 = (__tree_node_base *)*param_2;
          lVar10 = *(long *)(p_Var15 + 8);
          if (lVar10 == 0) {
            lVar10 = *(long *)(p_Var15 + 0x10);
          }
          *param_2 = lVar10;
          param_2[3] = param_2[3] + -1;
          std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)param_2[1],p_Var15);
          p_Var1 = p_Var14 + 0x20;
          if ((*(long **)(p_Var14 + 0x38) == *(long **)(p_Var15 + 0x38)) ||
             (uVar7 = (**(code **)(**(long **)(p_Var14 + 0x38) + 0x20))(), (uVar7 & 1) != 0)) {
            if (((byte)*p_Var1 & 1) == 0) {
              *(undefined2 *)p_Var1 = 0;
            }
            else {
              **(undefined1 **)(p_Var14 + 0x30) = 0;
              *(undefined8 *)(p_Var14 + 0x28) = 0;
              if (((byte)p_Var14[0x20] & 1) != 0) {
                (**(code **)(**(long **)(p_Var14 + 0x38) + 0x18))
                          (*(long **)(p_Var14 + 0x38),*(undefined8 *)(p_Var14 + 0x30),
                           *(ulong *)(p_Var14 + 0x20) & 0xfffffffffffffffe,1);
                *(undefined8 *)(p_Var14 + 0x20) = 0;
              }
            }
            uVar18 = *(undefined8 *)(p_Var15 + 0x28);
            uVar17 = *(undefined8 *)(p_Var15 + 0x20);
            *(undefined8 *)(p_Var14 + 0x30) = *(undefined8 *)(p_Var15 + 0x30);
            *(undefined8 *)(p_Var14 + 0x28) = uVar18;
            *(undefined8 *)p_Var1 = uVar17;
            *(undefined8 *)(p_Var15 + 0x28) = 0;
            *(undefined8 *)(p_Var15 + 0x30) = 0;
            *(undefined8 *)(p_Var15 + 0x20) = 0;
          }
          else if (p_Var14 != p_Var15) {
            uVar7 = *(ulong *)(p_Var15 + 0x28);
            p_Var3 = *(__tree_node_base **)(p_Var15 + 0x30);
            if (((byte)p_Var15[0x20] & 1) == 0) {
              p_Var3 = p_Var15 + 0x21;
              uVar7 = (ulong)((byte)p_Var15[0x20] >> 1);
            }
                    /* try { // try from 0061405c to 00614063 has its CatchHandler @ 006143e8 */
            FUN_02762710(p_Var1,p_Var3,uVar7);
          }
          p_Var1 = p_Var14 + 0x40;
          if ((*(long **)(p_Var14 + 0x58) == *(long **)(p_Var15 + 0x58)) ||
             (uVar7 = (**(code **)(**(long **)(p_Var14 + 0x58) + 0x20))(), (uVar7 & 1) != 0)) {
            if (((byte)*p_Var1 & 1) == 0) {
              *(undefined2 *)p_Var1 = 0;
            }
            else {
              **(undefined1 **)(p_Var14 + 0x50) = 0;
              *(undefined8 *)(p_Var14 + 0x48) = 0;
              if (((byte)p_Var14[0x40] & 1) != 0) {
                (**(code **)(**(long **)(p_Var14 + 0x58) + 0x18))
                          (*(long **)(p_Var14 + 0x58),*(undefined8 *)(p_Var14 + 0x50),
                           *(ulong *)(p_Var14 + 0x40) & 0xfffffffffffffffe,1);
                *(undefined8 *)(p_Var14 + 0x40) = 0;
              }
            }
            uVar18 = *(undefined8 *)(p_Var15 + 0x48);
            uVar17 = *(undefined8 *)(p_Var15 + 0x40);
            *(undefined8 *)(p_Var14 + 0x50) = *(undefined8 *)(p_Var15 + 0x50);
            *(undefined8 *)(p_Var14 + 0x48) = uVar18;
            *(undefined8 *)p_Var1 = uVar17;
            *(undefined8 *)(p_Var15 + 0x48) = 0;
            *(undefined8 *)(p_Var15 + 0x50) = 0;
            *(undefined8 *)(p_Var15 + 0x40) = 0;
            _Var5 = p_Var15[0x40];
          }
          else {
            if (p_Var14 != p_Var15) {
              uVar7 = *(ulong *)(p_Var15 + 0x48);
              p_Var3 = *(__tree_node_base **)(p_Var15 + 0x50);
              if (((byte)p_Var15[0x40] & 1) == 0) {
                p_Var3 = p_Var15 + 0x41;
                uVar7 = (ulong)((byte)p_Var15[0x40] >> 1);
              }
                    /* try { // try from 00614114 to 0061411b has its CatchHandler @ 006143e8 */
              FUN_02762710(p_Var1,p_Var3,uVar7);
            }
            _Var5 = p_Var15[0x40];
          }
          if (((byte)_Var5 & 1) != 0) {
            (**(code **)(**(long **)(p_Var15 + 0x58) + 0x18))
                      (*(long **)(p_Var15 + 0x58),*(undefined8 *)(p_Var15 + 0x50),
                       *(ulong *)(p_Var15 + 0x40) & 0xfffffffffffffffe,1);
          }
          if (((byte)p_Var15[0x20] & 1) != 0) {
            (**(code **)(**(long **)(p_Var15 + 0x38) + 0x18))
                      (*(long **)(p_Var15 + 0x38),*(undefined8 *)(p_Var15 + 0x30),
                       *(ulong *)(p_Var15 + 0x20) & 0xfffffffffffffffe,1);
          }
          (**(code **)(*(long *)param_2[2] + 0x18))((long *)param_2[2],p_Var15,0x60,8);
          plVar16 = (long *)*plVar13;
          if (plVar16 != (long *)0x0) {
            uVar7 = (ulong)((byte)p_Var14[0x20] >> 1);
            p_Var15 = *(__tree_node_base **)(p_Var14 + 0x30);
            if (((byte)p_Var14[0x20] & 1) == 0) {
              p_Var15 = p_Var14 + 0x21;
            }
            else {
              uVar7 = *(ulong *)(p_Var14 + 0x28);
            }
            do {
              bVar4 = *(byte *)(plVar16 + 4);
              uVar2 = (ulong)(bVar4 >> 1);
              if ((bVar4 & 1) != 0) {
                uVar2 = plVar16[5];
              }
              __n = uVar2;
              if (uVar7 <= uVar2) {
                __n = uVar7;
              }
              if (__n == 0) {
LAB_00614200:
                if (uVar7 < uVar2) goto LAB_006141f4;
LAB_006141a8:
                plVar9 = (long *)plVar16[1];
                if (plVar9 == (long *)0x0) {
                  plVar9 = plVar16 + 1;
                  goto LAB_00614224;
                }
              }
              else {
                __s2 = (void *)plVar16[6];
                if ((bVar4 & 1) == 0) {
                  __s2 = (void *)((long)plVar16 + 0x21);
                }
                iVar6 = memcmp(p_Var15,__s2,__n);
                if (iVar6 == 0) goto LAB_00614200;
                if (-1 < iVar6) goto LAB_006141a8;
LAB_006141f4:
                plVar9 = (long *)*plVar16;
                if (plVar9 == (long *)0x0) goto LAB_00614220;
              }
              plVar16 = plVar9;
            } while( true );
          }
          plVar9 = plVar13;
          plVar16 = plVar13;
          goto LAB_00614224;
        }
        goto LAB_006142d4;
      }
      p_Var8 = *(__tree_node_base **)p_Var11;
      if (p_Var8 == p_Var14) {
        *(undefined8 *)p_Var11 = 0;
        p_Var8 = *(__tree_node_base **)(p_Var11 + 8);
        if (*(__tree_node_base **)(p_Var11 + 8) == (__tree_node_base *)0x0) goto LAB_00613f80;
        do {
          do {
            p_Var11 = p_Var8;
            p_Var8 = *(__tree_node_base **)p_Var11;
          } while (*(__tree_node_base **)p_Var11 != (__tree_node_base *)0x0);
          p_Var8 = *(__tree_node_base **)(p_Var11 + 8);
        } while (*(__tree_node_base **)(p_Var11 + 8) != (__tree_node_base *)0x0);
      }
      else {
        *(undefined8 *)(p_Var11 + 8) = 0;
        if (p_Var8 == (__tree_node_base *)0x0) goto LAB_00613f80;
        do {
          do {
            p_Var11 = p_Var8;
            p_Var8 = *(__tree_node_base **)p_Var11;
          } while (*(__tree_node_base **)p_Var11 != (__tree_node_base *)0x0);
          p_Var8 = *(__tree_node_base **)(p_Var11 + 8);
        } while (*(__tree_node_base **)(p_Var11 + 8) != (__tree_node_base *)0x0);
      }
      if (p_Var14 != (__tree_node_base *)0x0) goto LAB_00613f80;
LAB_006142d4:
      FUN_02767254(param_1,p_Var14);
      if (p_Var11 == (__tree_node_base *)0x0) goto LAB_0061432c;
      p_Var14 = *(__tree_node_base **)(p_Var11 + 0x10);
      while (p_Var8 = p_Var14, p_Var8 != (__tree_node_base *)0x0) {
        p_Var11 = p_Var8;
        p_Var14 = *(__tree_node_base **)(p_Var8 + 0x10);
      }
      FUN_02767254(param_1,p_Var11);
      lVar10 = param_2[3];
    }
    while (lVar10 != 0) {
      p_Var14 = (__tree_node_base *)*param_2;
      lVar12 = *(long *)(p_Var14 + 8);
      if (lVar12 == 0) {
        lVar12 = *(long *)(p_Var14 + 0x10);
      }
      *param_2 = lVar12;
      param_2[3] = lVar10 + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)param_2[1],p_Var14);
      local_70 = p_Var14 + 0x20;
      p_Stack_68 = p_Var14 + 0x40;
                    /* try { // try from 00614368 to 00614377 has its CatchHandler @ 00614488 */
      FUN_006144fc(param_1,plVar13,&local_70);
      if (p_Var14 != (__tree_node_base *)0x0) {
        if (((byte)p_Var14[0x40] & 1) != 0) {
          (**(code **)(**(long **)(p_Var14 + 0x58) + 0x18))
                    (*(long **)(p_Var14 + 0x58),*(undefined8 *)(p_Var14 + 0x50),
                     *(ulong *)(p_Var14 + 0x40) & 0xfffffffffffffffe,1);
        }
        if (((byte)p_Var14[0x20] & 1) != 0) {
          (**(code **)(**(long **)(p_Var14 + 0x38) + 0x18))
                    (*(long **)(p_Var14 + 0x38),*(undefined8 *)(p_Var14 + 0x30),
                     *(ulong *)(p_Var14 + 0x20) & 0xfffffffffffffffe,1);
        }
        (**(code **)(*(long *)param_2[2] + 0x18))((long *)param_2[2],p_Var14,0x60,8);
      }
LAB_0061432c:
      lVar10 = param_2[3];
    }
  }
  return;
LAB_00614220:
  plVar9 = plVar16;
LAB_00614224:
  *(undefined8 *)p_Var14 = 0;
  *(undefined8 *)(p_Var14 + 8) = 0;
  *(long **)(p_Var14 + 0x10) = plVar16;
  *plVar9 = (long)p_Var14;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    p_Var14 = (__tree_node_base *)*plVar9;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],p_Var14);
  param_1[3] = param_1[3] + 1;
  if (p_Var8 != (__tree_node_base *)0x0) {
    p_Var11 = *(__tree_node_base **)(p_Var8 + 0x10);
    if (p_Var11 == (__tree_node_base *)0x0) {
      p_Var11 = (__tree_node_base *)0x0;
    }
    else {
      p_Var14 = *(__tree_node_base **)p_Var11;
      if (p_Var14 == p_Var8) {
        p_Var14 = *(__tree_node_base **)(p_Var11 + 8);
        *(undefined8 *)p_Var11 = 0;
        while( true ) {
          if (p_Var14 == (__tree_node_base *)0x0) break;
          do {
            p_Var11 = p_Var14;
            p_Var14 = *(__tree_node_base **)p_Var11;
          } while (*(__tree_node_base **)p_Var11 != (__tree_node_base *)0x0);
          p_Var14 = *(__tree_node_base **)(p_Var11 + 8);
        }
      }
      else {
        *(undefined8 *)(p_Var11 + 8) = 0;
        while( true ) {
          if (p_Var14 == (__tree_node_base *)0x0) break;
          do {
            p_Var11 = p_Var14;
            p_Var14 = *(__tree_node_base **)p_Var11;
          } while (*(__tree_node_base **)p_Var11 != (__tree_node_base *)0x0);
          p_Var14 = *(__tree_node_base **)(p_Var11 + 8);
        }
      }
    }
  }
  p_Var14 = p_Var8;
  if (p_Var8 == (__tree_node_base *)0x0) goto LAB_006142d4;
  goto LAB_00613f80;
}


