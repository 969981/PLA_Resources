/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055de34; name: FUN_0055de34
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0055de34(ulong param_1)

{
  short sVar1;
  long *plVar2;
  undefined *puVar3;
  pthread_rwlock_t *__rwlock;
  bool bVar4;
  int iVar5;
  __tree_node_base *p_Var6;
  ostream *this;
  long *plVar7;
  __tree_node_base *p_Var8;
  __tree_node_base *p_Var9;
  ulong uVar10;
  __tree_node_base *p_Var11;
  ulong *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined1 auStack_160 [8];
  ostream aoStack_158 [264];
  
  __rwlock = DAT_0439ed58;
  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 == -1) {
    iVar5 = pthread_rwlock_wrlock(DAT_0439ed58);
    plVar2 = DAT_0439ed60;
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar14 = DAT_0439ed60 + 1;
    plVar15 = (long *)*plVar14;
    if (plVar15 == (long *)0x0) {
      plVar15 = plVar14;
LAB_0055defc:
      lVar16 = *plVar14;
    }
    else {
      plVar14 = DAT_0439ed60 + 1;
      bVar4 = param_1 <= (ulong)plVar15[4];
      if (!bVar4 || plVar15[4] == param_1) goto LAB_0055ded4;
      while (plVar14 = plVar15, plVar15 = (long *)*plVar14, plVar15 != (long *)0x0) {
        bVar4 = param_1 <= (ulong)plVar15[4];
        if ((ulong)plVar15[4] <= param_1) {
LAB_0055ded4:
          do {
            if (bVar4) goto LAB_0055defc;
            plVar14 = plVar15 + 1;
            plVar7 = (long *)*plVar14;
            if (plVar7 == (long *)0x0) goto LAB_0055defc;
            bVar4 = param_1 <= (ulong)plVar7[4];
            plVar15 = plVar7;
          } while (!bVar4 || plVar7[4] == param_1);
        }
      }
      lVar16 = *plVar14;
      plVar15 = plVar14;
    }
    if (lVar16 == 0) {
      p_Var6 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
      *(ulong *)(p_Var6 + 0x20) = param_1;
      *(undefined4 *)(p_Var6 + 0x28) = 0;
      *(long **)(p_Var6 + 0x10) = plVar15;
      *(undefined8 *)p_Var6 = 0;
      *(undefined8 *)(p_Var6 + 8) = 0;
      *plVar14 = (long)p_Var6;
      if (*(long *)*plVar2 == 0) {
        p_Var9 = p_Var6;
      }
      else {
        *plVar2 = *(long *)*plVar2;
        p_Var9 = (__tree_node_base *)*plVar14;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)plVar2[1],p_Var9);
      plVar2[2] = plVar2[2] + 1;
      iVar5 = *(int *)(p_Var6 + 0x28);
      plVar2 = DAT_0439ed60;
    }
    else {
      iVar5 = *(int *)(lVar16 + 0x28);
    }
    DAT_0439ed60 = plVar2;
    if (iVar5 < 0x10000) {
      *(short *)(param_1 + 4) = (short)(iVar5 + -1);
      plVar2 = DAT_0439ed60;
      p_Var9 = (__tree_node_base *)(DAT_0439ed60 + 1);
      p_Var6 = *(__tree_node_base **)p_Var9;
      if (p_Var6 != (__tree_node_base *)0x0) {
        p_Var8 = p_Var6;
        p_Var11 = p_Var9;
        do {
          if (*(ulong *)(p_Var8 + 0x20) >= param_1) {
            p_Var11 = p_Var8;
          }
          p_Var8 = *(__tree_node_base **)(p_Var8 + (ulong)(*(ulong *)(p_Var8 + 0x20) < param_1) * 8)
          ;
        } while (p_Var8 != (__tree_node_base *)0x0);
        if ((p_Var11 != p_Var9) && (*(ulong *)(p_Var11 + 0x20) <= param_1)) {
          plVar14 = *(long **)(p_Var11 + 8);
          if (*(long **)(p_Var11 + 8) == (long *)0x0) {
            p_Var9 = p_Var11 + 0x10;
            plVar15 = *(long **)p_Var9;
            if ((__tree_node_base *)*plVar15 != p_Var11) {
              do {
                lVar16 = *(long *)p_Var9;
                p_Var9 = (__tree_node_base *)(lVar16 + 0x10);
                plVar15 = *(long **)p_Var9;
              } while (*plVar15 != lVar16);
            }
          }
          else {
            do {
              plVar15 = plVar14;
              plVar14 = (long *)*plVar15;
            } while ((long *)*plVar15 != (long *)0x0);
          }
          if ((__tree_node_base *)*DAT_0439ed60 == p_Var11) {
            *DAT_0439ed60 = (long)plVar15;
          }
          plVar2[2] = plVar2[2] + -1;
          std::__tree_remove<std::__tree_node_base<void*>*>(p_Var6,p_Var11);
          FUN_002e2ea0(PTR_LAB_04373088,p_Var11);
        }
      }
    }
    else {
      plVar14 = plVar2 + 1;
      plVar15 = (long *)*plVar14;
      if (plVar15 == (long *)0x0) {
        plVar15 = plVar14;
LAB_0055e04c:
        p_Var6 = (__tree_node_base *)*plVar14;
      }
      else {
        plVar14 = plVar2 + 1;
        bVar4 = param_1 <= (ulong)plVar15[4];
        if (!bVar4 || plVar15[4] == param_1) goto LAB_0055e024;
        while (plVar14 = plVar15, plVar15 = (long *)*plVar14, plVar15 != (long *)0x0) {
          bVar4 = param_1 <= (ulong)plVar15[4];
          if ((ulong)plVar15[4] <= param_1) {
LAB_0055e024:
            do {
              if (bVar4) goto LAB_0055e04c;
              plVar14 = plVar15 + 1;
              plVar7 = (long *)*plVar14;
              if (plVar7 == (long *)0x0) goto LAB_0055e04c;
              bVar4 = param_1 <= (ulong)plVar7[4];
              plVar15 = plVar7;
            } while (!bVar4 || plVar7[4] == param_1);
          }
        }
        p_Var6 = (__tree_node_base *)*plVar14;
        plVar15 = plVar14;
      }
      if (p_Var6 == (__tree_node_base *)0x0) {
        p_Var6 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
        *(ulong *)(p_Var6 + 0x20) = param_1;
        *(undefined4 *)(p_Var6 + 0x28) = 0;
        *(long **)(p_Var6 + 0x10) = plVar15;
        *(undefined8 *)p_Var6 = 0;
        *(undefined8 *)(p_Var6 + 8) = 0;
        *plVar14 = (long)p_Var6;
        if (*(long *)*plVar2 == 0) {
          p_Var9 = p_Var6;
        }
        else {
          *plVar2 = *(long *)*plVar2;
          p_Var9 = (__tree_node_base *)*plVar14;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((__tree_node_base *)plVar2[1],p_Var9);
        plVar2[2] = plVar2[2] + 1;
      }
      *(int *)(p_Var6 + 0x28) = iVar5 + -1;
    }
                    /* try { // try from 0055e0c0 to 0055e0c7 has its CatchHandler @ 0055e14c */
    iVar5 = pthread_rwlock_unlock(__rwlock);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0055e148 to 0055e14b has its CatchHandler @ 0055e14c */
      abort();
    }
    return;
  }
  *(short *)(param_1 + 4) = sVar1 + -1;
  if (sVar1 != 1) {
    return;
  }
  if (*(short *)(param_1 + 6) == 0) {
    FUN_0055da64(param_1);
    FUN_002e2ea0(PTR_LAB_04373088,param_1);
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar3 = PTR_LAB_04373088;
  if (*(short *)(param_1 + 4) != 0) {
LAB_0055e284:
    FUN_0054f038(auStack_160,"external/com_github_google_re2/re2/regexp.cc",0x93);
                    /* try { // try from 0055e2a0 to 0055e2b7 has its CatchHandler @ 0055e30c */
    this = std::__put_character_sequence<char,std::char_traits<char>>
                     (aoStack_158,"Bad reference count ",0x14);
    std::ostream::operator<<(this,*(ushort *)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
    FUN_005503fc(auStack_160);
  }
  uVar10 = param_1;
  uVar13 = 0;
LAB_0055e190:
  param_1 = uVar13;
  if (*(short *)(uVar10 + 6) != 0) {
    puVar12 = (ulong *)(uVar10 + 8);
    if (*(short *)(uVar10 + 6) != 1) {
      puVar12 = (ulong *)*puVar12;
    }
    lVar16 = 0;
    uVar13 = *puVar12;
    do {
      if (uVar13 == 0) {
LAB_0055e1c0:
        uVar13 = (ulong)*(ushort *)(uVar10 + 6);
        if (uVar13 <= lVar16 + 1U) goto LAB_0055e23c;
      }
      else {
        sVar1 = *(short *)(uVar13 + 4);
        if (sVar1 == -1) {
          FUN_0055de34(uVar13);
          if (*(short *)(uVar13 + 4) == 0) goto LAB_0055e1f4;
          goto LAB_0055e1c0;
        }
        *(short *)(uVar13 + 4) = sVar1 + -1;
        if (sVar1 != 1) goto LAB_0055e1c0;
LAB_0055e1f4:
        if (*(short *)(uVar13 + 6) != 0) {
          *(ulong *)(uVar13 + 0x10) = param_1;
          param_1 = uVar13;
          goto LAB_0055e1c0;
        }
        FUN_0055da64(uVar13);
        FUN_002e2ea0(puVar3,uVar13);
        uVar13 = (ulong)*(ushort *)(uVar10 + 6);
        if (uVar13 <= lVar16 + 1U) goto LAB_0055e23c;
      }
      lVar16 = lVar16 + 1;
      uVar13 = puVar12[lVar16];
    } while( true );
  }
  goto LAB_0055e25c;
LAB_0055e23c:
  if (1 < (uint)uVar13) {
    FUN_002e2f10(puVar12);
    FUN_002e2ef0(puVar3,puVar12);
  }
  *(undefined2 *)(uVar10 + 6) = 0;
LAB_0055e25c:
  FUN_0055da64(uVar10);
  FUN_002e2ea0(puVar3,uVar10);
  if (param_1 == 0) {
    return;
  }
  uVar10 = param_1;
  uVar13 = *(ulong *)(param_1 + 0x10);
  if (*(short *)(param_1 + 4) != 0) goto LAB_0055e284;
  goto LAB_0055e190;
}


