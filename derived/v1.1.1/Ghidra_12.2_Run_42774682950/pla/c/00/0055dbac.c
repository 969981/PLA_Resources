/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055dbac; name: FUN_0055dbac
 */


ulong FUN_0055dbac(ulong param_1)

{
  pthread_rwlock_t *__rwlock;
  long *plVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  __tree_node_base *p_Var5;
  long *plVar6;
  __tree_node_base *p_Var7;
  long *plVar8;
  undefined1 auStack_50 [8];
  undefined1 **local_48;
  undefined1 *local_38;
  
  if (*(ushort *)(param_1 + 4) < 0xfffe) {
    *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) + 1;
  }
  else {
    if (DAT_0439ed68 != -1) {
      local_48 = &local_38;
      local_38 = auStack_50;
      std::__call_once((ulong *)&DAT_0439ed68,&local_48,(_func_void_void_ptr *)&LAB_00560e70);
    }
    __rwlock = DAT_0439ed58;
    iVar4 = pthread_rwlock_wrlock(DAT_0439ed58);
    plVar1 = DAT_0439ed60;
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar8 = DAT_0439ed60 + 1;
    plVar6 = (long *)*plVar8;
    if (*(short *)(param_1 + 4) == -1) {
      if (plVar6 == (long *)0x0) {
        p_Var7 = (__tree_node_base *)*plVar8;
        plVar6 = plVar8;
      }
      else {
        plVar8 = DAT_0439ed60 + 1;
        bVar3 = param_1 <= (ulong)plVar6[4];
        if (!bVar3 || plVar6[4] == param_1) goto LAB_0055dcd4;
LAB_0055dcb8:
        if ((long *)*plVar6 != (long *)0x0) {
          plVar2 = (long *)*plVar6;
          plVar8 = plVar6;
LAB_0055dcc4:
          plVar6 = plVar2;
          bVar3 = param_1 <= (ulong)plVar6[4];
          if ((ulong)plVar6[4] <= param_1) {
LAB_0055dcd4:
            if (!bVar3) goto code_r0x0055dcd8;
            goto LAB_0055dce4;
          }
          goto LAB_0055dcb8;
        }
        p_Var7 = (__tree_node_base *)*plVar6;
      }
      plVar8 = plVar6;
      if (p_Var7 == (__tree_node_base *)0x0) {
LAB_0055dd9c:
        p_Var7 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
        *(ulong *)(p_Var7 + 0x20) = param_1;
        *(undefined4 *)(p_Var7 + 0x28) = 0;
        *(long **)(p_Var7 + 0x10) = plVar6;
        *(undefined8 *)p_Var7 = 0;
        *(undefined8 *)(p_Var7 + 8) = 0;
        *plVar8 = (long)p_Var7;
        if (*(long *)*plVar1 == 0) {
          p_Var5 = p_Var7;
        }
        else {
          *plVar1 = *(long *)*plVar1;
          p_Var5 = (__tree_node_base *)*plVar8;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((__tree_node_base *)plVar1[1],p_Var5);
        plVar1[2] = plVar1[2] + 1;
      }
LAB_0055ddf4:
      *(int *)(p_Var7 + 0x28) = *(int *)(p_Var7 + 0x28) + 1;
    }
    else {
      if (plVar6 == (long *)0x0) {
        p_Var7 = (__tree_node_base *)*plVar8;
        plVar6 = plVar8;
      }
      else {
        plVar8 = DAT_0439ed60 + 1;
        bVar3 = param_1 <= (ulong)plVar6[4];
        if (!bVar3 || plVar6[4] == param_1) goto LAB_0055dc78;
LAB_0055dc68:
        if ((long *)*plVar6 != (long *)0x0) {
          plVar2 = (long *)*plVar6;
          plVar8 = plVar6;
LAB_0055dc58:
          plVar6 = plVar2;
          bVar3 = param_1 <= (ulong)plVar6[4];
          if (!bVar3 || plVar6[4] == param_1) {
LAB_0055dc78:
            if (!bVar3) goto code_r0x0055dc7c;
            goto LAB_0055dc88;
          }
          goto LAB_0055dc68;
        }
        p_Var7 = (__tree_node_base *)*plVar6;
      }
      plVar8 = plVar6;
      if (p_Var7 == (__tree_node_base *)0x0) {
LAB_0055dd24:
        p_Var7 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
        *(ulong *)(p_Var7 + 0x20) = param_1;
        *(undefined4 *)(p_Var7 + 0x28) = 0;
        *(long **)(p_Var7 + 0x10) = plVar6;
        *(undefined8 *)p_Var7 = 0;
        *(undefined8 *)(p_Var7 + 8) = 0;
        *plVar8 = (long)p_Var7;
        if (*(long *)*plVar1 == 0) {
          p_Var5 = p_Var7;
        }
        else {
          *plVar1 = *(long *)*plVar1;
          p_Var5 = (__tree_node_base *)*plVar8;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((__tree_node_base *)plVar1[1],p_Var5);
        plVar1[2] = plVar1[2] + 1;
      }
LAB_0055dd7c:
      *(undefined4 *)(p_Var7 + 0x28) = 0xffff;
      *(undefined2 *)(param_1 + 4) = 0xffff;
    }
                    /* try { // try from 0055de00 to 0055de07 has its CatchHandler @ 0055de30 */
    iVar4 = pthread_rwlock_unlock(__rwlock);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0055de2c to 0055de2f has its CatchHandler @ 0055de30 */
      abort();
    }
  }
  return param_1;
code_r0x0055dcd8:
  plVar8 = plVar6 + 1;
  plVar2 = (long *)*plVar8;
  if ((long *)*plVar8 == (long *)0x0) {
LAB_0055dce4:
    p_Var7 = (__tree_node_base *)*plVar8;
    if (p_Var7 != (__tree_node_base *)0x0) goto LAB_0055ddf4;
    goto LAB_0055dd9c;
  }
  goto LAB_0055dcc4;
code_r0x0055dc7c:
  plVar8 = plVar6 + 1;
  plVar2 = (long *)*plVar8;
  if ((long *)*plVar8 == (long *)0x0) {
LAB_0055dc88:
    p_Var7 = (__tree_node_base *)*plVar8;
    if (p_Var7 != (__tree_node_base *)0x0) goto LAB_0055dd7c;
    goto LAB_0055dd24;
  }
  goto LAB_0055dc58;
}


